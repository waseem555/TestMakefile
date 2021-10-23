#include <stdio.h>
#include "prime.h"
#include "gcd.h"

int main()
{
    int x, y;
    float avg;

    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);

    printf("You typed in %d and %d\n",x,y);

    avg= (float)(x+y)/2;

    //%.2f is used for displaying output upto two decimal places
    printf("Average of %d and %d is: %.2f\n",x,y,avg);

    isGivenNumberPrime(x); 
    isGivenNumberPrime(y); 
    areTwoNumbersCoPrime(x,y); 
    return 0;
}
