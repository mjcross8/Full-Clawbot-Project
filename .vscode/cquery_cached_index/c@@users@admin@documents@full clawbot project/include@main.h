

#ifndef MAIN_H_

// This prevents multiple inclusion, which isn't bad for this file but is good practice
#define MAIN_H_

#include <API.h>

// Digital port number for top and bottom port of quad encoder
#define QUAD_TOP_PORT 2
#define QUAD_BOTTOM_PORT 3

// digital port number limit switch is plugged into
#define LIMIT_SWITCH 6

// Multiple encoders can be declared
Encoder shoulderencoder;

// Allow usage of this file in C++ programs
#ifdef __cplusplus
extern "C" {
#endif


void autonomous();

void initializeIO();

void initialize();

void operatorControl();

// End C++ export structure
#ifdef __cplusplus
}
#endif

#endif
