#include <stdio.h>
#include "main.h"

void average() {
    float a,b,c;
    float avg;
        

    printf("enter 3 numbers");
    scanf("%f%f%f",&a,&b,&c);
    avg = (a+b+c)/3;
    printf("average  of numbers is%f",avg);

    
}
