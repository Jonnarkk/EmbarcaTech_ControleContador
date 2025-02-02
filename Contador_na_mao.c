#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/clocks.h"
#include "hardware/gpio.h"
#include "pio_matriz.pio.h"
#include "./headers/led_matriz.h"
#include "./headers/numeros.h"

// Defines
#define Red_pin 13      // Pino do LED vermelho
#define Botao_A 5       // Pino do botão A
#define Botao_B 6       // Pino do botão B
#define DEBOUNCE_DELAY 200 // Tempo de debounce em ms

// Variáveis globais
volatile int numero = 0; // Número atual exibido na matriz
volatile uint32_t ultimo_tempo_botao_A = 0; // Último tempo de acionamento do botão A
volatile uint32_t ultimo_tempo_botao_B = 0; // Último tempo de acionamento do botão B

// Função para inicializar os pinos
void inicializar_pinos() {
    gpio_init(Red_pin);
    gpio_set_dir(Red_pin, GPIO_OUT);
    gpio_init(Botao_A);
    gpio_set_dir(Botao_A, GPIO_IN);
    gpio_pull_up(Botao_A); // Habilita resistor de pull-up
    gpio_init(Botao_B);
    gpio_set_dir(Botao_B, GPIO_IN);
    gpio_pull_up(Botao_B); // Habilita resistor de pull-up
}

void blink_vermelho() {
    gpio_put(Red_pin, 1);
    sleep_ms(100);
    gpio_put(Red_pin, 0);
    sleep_ms(100);
}

// Função para exibir o número atual na matriz
void exibir_numero(PIO pio, uint sm) {
    switch (numero) {
        case 0: num0(pio, sm); break;
        case 1: num1(pio, sm); break;
        case 2: num2(pio, sm); break;
        case 3: num3(pio, sm); break;
        case 4: num4(pio, sm); break;
        case 5: num5(pio, sm); break;
        case 6: num6(pio, sm); break;
        case 7: num7(pio, sm); break;
        case 8: num8(pio, sm); break;
        case 9: num9(pio, sm); break;
        default: break;
    }
}

// Função de interrupção para os botões
void botao_callback(uint gpio, uint32_t events) {
    uint32_t tempo_atual = to_ms_since_boot(get_absolute_time());

    if (gpio == Botao_A) { // Verifica se o botão A foi pressionado
        if (tempo_atual - ultimo_tempo_botao_A > DEBOUNCE_DELAY) { // Debounce
            printf("Botão A pressionado!\n"); 
            numero = (numero + 1) % 10; // Incrementa o número
            ultimo_tempo_botao_A = tempo_atual;
        }
    } else if (gpio == Botao_B) { // Verifica se o botão B foi pressionado
        if (tempo_atual - ultimo_tempo_botao_B > DEBOUNCE_DELAY) { // Debounce
            printf("Botão B pressionado!\n"); 
            numero = (numero - 1 + 10) % 10; // Decrementa o número
            ultimo_tempo_botao_B = tempo_atual;
        }
    }
}

int main() {
    PIO pio = pio0;
    uint sm = 0;
    uint offset = pio_add_program(pio, &pio_matriz_program);
    pio_matriz_program_init(pio, sm, offset, Pino_Matriz);

    stdio_init_all();
    inicializar_pinos();

    // Configura interrupções para os botões
    gpio_set_irq_enabled(Botao_A, GPIO_IRQ_EDGE_FALL, true);
    gpio_set_irq_enabled(Botao_B, GPIO_IRQ_EDGE_FALL, true);
    gpio_set_irq_callback(botao_callback); // Define a callback para os botões
    irq_set_enabled(IO_IRQ_BANK0, true); // Habilita interrupções do banco 0

    printf("Sistema iniciado. Aguardando pressionamento dos botões...\n");

    while (true) {
        blink_vermelho();
        exibir_numero(pio, sm); // Exibe o número atual na matriz
    }
}