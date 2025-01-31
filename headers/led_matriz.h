#ifndef LED_MATRIZ_H
#define LED_MATRIZ_H

#include "hardware/pio.h"

#define Pino_Matriz 7
#define Num_pixels 25

uint32_t matriz_rgb(double b, double r, double g);

#endif