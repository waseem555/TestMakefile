#include <stdio.h>
#include <math.h>
#include "prime.h"

void isGivenNumberPrime(int n)
{
    int i, flag = 1;
 
    // Iterate from 2 to sqrt(n)
    for (i = 2; i <= sqrt(n); i++) {
 
        // If n is divisible by any number between
        // 2 and n/2, it is not prime
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
 
    if (n <= 1)
        flag = 0;
 
    if (flag == 1) {
        printf("%d is a Prime Number\n", n);
    }
    else {
        printf("%d is Not a Prime Number\n", n);
    }
}
