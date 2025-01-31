#include "../headers/numeros.h"
#include "../headers/led_matriz.h"
#include "pico/stdlib.h"

// Função para exibir o número 0
void num0(PIO pio, uint sm) {
    double frame[25] = {
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 1
        1.0, 0.0, 0.0, 0.0, 1.0,  // Linha 2
        1.0, 0.0, 0.0, 0.0, 1.0,  // Linha 3
        1.0, 0.0, 0.0, 0.0, 1.0,  // Linha 4
        1.0, 1.0, 1.0, 1.0, 1.0   // Linha 5
    };

    for (int i = 0; i < 25; i++) {
        pio_sm_put_blocking(pio, sm, matrix_rgb(frame[i], 0.0, 0.0));  // Cor vermelha
    }
}

// Função para exibir o número 1
void num1(PIO pio, uint sm) {
    double frame[25] = {
        0.0, 0.0, 1.0, 0.0, 0.0,  // Linha 1
        0.0, 1.0, 1.0, 0.0, 0.0,  // Linha 2
        0.0, 0.0, 1.0, 0.0, 0.0,  // Linha 3
        0.0, 0.0, 1.0, 0.0, 0.0,  // Linha 4
        0.0, 1.0, 1.0, 1.0, 0.0   // Linha 5
    };

    for (int i = 0; i < 25; i++) {
        pio_sm_put_blocking(pio, sm, matrix_rgb(frame[i], 0.0, 0.0));  // Cor vermelha
    }
}

// Função para exibir o número 2
void num2(PIO pio, uint sm) {
    double frame[25] = {
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 1
        0.0, 0.0, 0.0, 0.0, 1.0,  // Linha 2
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 3
        1.0, 0.0, 0.0, 0.0, 0.0,  // Linha 4
        1.0, 1.0, 1.0, 1.0, 1.0   // Linha 5
    };

    for (int i = 0; i < 25; i++) {
        pio_sm_put_blocking(pio, sm, matrix_rgb(frame[i], 0.0, 0.0));  // Cor vermelha
    }
}

// Função para exibir o número 3
void num3(PIO pio, uint sm) {
    double frame[25] = {
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 1
        0.0, 0.0, 0.0, 0.0, 1.0,  // Linha 2
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 3
        0.0, 0.0, 0.0, 0.0, 1.0,  // Linha 4
        1.0, 1.0, 1.0, 1.0, 1.0   // Linha 5
    };

    for (int i = 0; i < 25; i++) {
        pio_sm_put_blocking(pio, sm, matrix_rgb(frame[i], 0.0, 0.0));  // Cor vermelha
    }
}

// Função para exibir o número 4
void num4(PIO pio, uint sm) {
    double frame[25] = {
        1.0, 0.0, 0.0, 0.0, 1.0,  // Linha 1
        1.0, 0.0, 0.0, 0.0, 1.0,  // Linha 2
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 3
        0.0, 0.0, 0.0, 0.0, 1.0,  // Linha 4
        0.0, 0.0, 0.0, 0.0, 1.0   // Linha 5
    };

    for (int i = 0; i < 25; i++) {
        pio_sm_put_blocking(pio, sm, matrix_rgb(frame[i], 0.0, 0.0));  // Cor vermelha
    }
}

// Função para exibir o número 5
void num5(PIO pio, uint sm) {
    double frame[25] = {
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 1
        1.0, 0.0, 0.0, 0.0, 0.0,  // Linha 2
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 3
        0.0, 0.0, 0.0, 0.0, 1.0,  // Linha 4
        1.0, 1.0, 1.0, 1.0, 1.0   // Linha 5
    };

    for (int i = 0; i < 25; i++) {
        pio_sm_put_blocking(pio, sm, matrix_rgb(frame[i], 0.0, 0.0));  // Cor vermelha
    }
}

// Função para exibir o número 6
void num6(PIO pio, uint sm) {
    double frame[25] = {
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 1
        1.0, 0.0, 0.0, 0.0, 0.0,  // Linha 2
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 3
        1.0, 0.0, 0.0, 0.0, 1.0,  // Linha 4
        1.0, 1.0, 1.0, 1.0, 1.0   // Linha 5
    };

    for (int i = 0; i < 25; i++) {
        pio_sm_put_blocking(pio, sm, matrix_rgb(frame[i], 0.0, 0.0));  // Cor vermelha
    }
}

// Função para exibir o número 7
void num7(PIO pio, uint sm) {
    double frame[25] = {
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 1
        0.0, 0.0, 0.0, 0.0, 1.0,  // Linha 2
        0.0, 0.0, 0.0, 1.0, 0.0,  // Linha 3
        0.0, 0.0, 1.0, 0.0, 0.0,  // Linha 4
        0.0, 1.0, 0.0, 0.0, 0.0   // Linha 5
    };

    for (int i = 0; i < 25; i++) {
        pio_sm_put_blocking(pio, sm, matrix_rgb(frame[i], 0.0, 0.0));  // Cor vermelha
    }
}

// Função para exibir o número 8
void num8(PIO pio, uint sm) {
    double frame[25] = {
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 1
        1.0, 0.0, 0.0, 0.0, 1.0,  // Linha 2
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 3
        1.0, 0.0, 0.0, 0.0, 1.0,  // Linha 4
        1.0, 1.0, 1.0, 1.0, 1.0   // Linha 5
    };

    for (int i = 0; i < 25; i++) {
        pio_sm_put_blocking(pio, sm, matrix_rgb(frame[i], 0.0, 0.0));  // Cor vermelha
    }
}

// Função para exibir o número 9
void num9(PIO pio, uint sm) {
    double frame[25] = {
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 1
        1.0, 0.0, 0.0, 0.0, 1.0,  // Linha 2
        1.0, 1.0, 1.0, 1.0, 1.0,  // Linha 3
        0.0, 0.0, 0.0, 0.0, 1.0,  // Linha 4
        1.0, 1.0, 1.0, 1.0, 1.0   // Linha 5
    };

    for (int i = 0; i < 25; i++) {
        pio_sm_put_blocking(pio, sm, matrix_rgb(frame[i], 0.0, 0.0));  // Cor vermelha
    }
}