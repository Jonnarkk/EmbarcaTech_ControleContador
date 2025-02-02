# EmbarcaTech_ControleContador

## Descrição
Este projeto faz o controle da matriz de LED (5x5 WS2812) a partir dos botões da placa, utilizando uma lógica de contador para mostrar números de 0 a 9 na matriz, juntamente com blinks do LED RGB.

## Funcionalidades
- **Botão A**: Incrementa o número na matriz de LED's
- **Botão B**: Decrementa o número na matriz de LED's

## Estrutura do Código
O código está estruturado em funções para inicilização e manuseio dos periféricos:

- `inicializar_pinos()`: Inicializa todos os pinos necessários para execução do código
- `blink_vermelho()`: Faz com que o LED RGB pisque em uma frequência de 5Hz
- `exibir_numeros()`: Exibe os números na matriz de LED's
- `botao_callback(uint gpio, uint32_t events)`: Implementa interrupção dos botões e tratamento de debouncing, além de realizar lógica dos botões
- `matriz_rgb(double r, double g, double b)`: Inicializa a matriz de LED's

## Estrutura dos arquivos
```
project/
│
├── cFiles/
│   ├── led_matriz.c
│   ├── numeros.c
│
├── headers/
│   ├── led_matriz.h
│   ├── numeros.h
├── Contador_na_mao.c
├── CMakeLists.txt
└── README.md
```

## Desenvolvedor
Guiherme Miller Gama Cardoso

## Link com o vídeo explicativo