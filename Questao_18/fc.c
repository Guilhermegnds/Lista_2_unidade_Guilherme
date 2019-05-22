#include <stdio.h>
#include <stdlib.h>

float fc (float tempf){
    float tempc;
    tempc = (((tempf - 32)*5)/9);
    return tempc;
}
