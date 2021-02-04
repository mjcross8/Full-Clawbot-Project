#ifndef _HOMESHOULDER_H_
#define _HOMESHOULDER_H_

#include "main.h"
#include "shoulder.h"
// Sets the speeds of the left and right wheels of the chassis

void homeShoulder(int homePosition) {
printf("homing started, stand by \n");
delay(1000);

while(LIMIT_SWITCH ==1);
// start a while loop with the condition lowerLimit == 1
shoulderSet(100);
//turn on shoulder in neg direction
delay(LIMIT_SWITCH ==0);
//wait unitll lowerLimit == 1 is no longer true
shoulderSet(0);
//stop shoulder motor
encoderReset(shoulderencoder);
//reset sholderEncoder
while(encoderGet(shoulderencoder) < homePosition);
//start while loop with condition sholderEncoder < homePosition(or another home position)
//turn on shouldMoter in pos direction
//wait untill sholderEncoder < homePosition (or other home position)
//stop sholderMotor (the shoulder joint is now "homed") }

printf("homing complete \n");
}

#endif // _HOMESHOULDER_H_
