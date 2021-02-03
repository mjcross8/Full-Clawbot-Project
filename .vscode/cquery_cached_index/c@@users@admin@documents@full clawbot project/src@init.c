

#include "main.h"


void initializeIO() {

  // configure the pin that the limit switch is plugged into as an input
  pinMode(LIMIT_SWITCH, INPUT);
}



void initialize() {

  shoulderencoder = encoderInit(QUAD_TOP_PORT, QUAD_BOTTOM_PORT, true);
}
