#include <stdio.h>
#include "main.h"

void revnum() {
    int num, rev = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num > 0) {
        
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }

    
    printf("Reversed number: %d\n", rev);

    
}
