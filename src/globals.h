#ifndef GLOBALS_H
#define GLOBALS_H

#include "types.h"

// Game area dimensions
#define BOARD_WIDTH 15
#define BOARD_HEIGHT 10
extern const ushort CELL_SIZE;

// Game definitions
extern const double FPS;
extern const char MIN_SPEED;
extern const char MAX_SPEED;

// Snake colour/gradient count
#define SNAKE_COLOUR_COUNT 150
extern const ushort SNAKE_GRADIENT_LENGTH;

// Initial snake length
extern const ushort SNAKE_INIT_LENGTH;

extern const RGB RAINBOW[6];

// Calculate the size of array a
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])

#endif // !GLOBALS_H
