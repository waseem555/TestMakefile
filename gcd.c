#include <stdio.h>
#include "gcd.h"

void areTwoNumbersCoPrime(int num1, int num2)
{
    int hcf, i;
	
    // Finding HCF
    for(i=1;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
	{
	    hcf = i;
	}
    }
	
    // Making Decision
    if(hcf == 1)
    {
        printf("%d and %d are CoPrime Numbers\n", num1, num2);
    }
    else
    {
        printf("%d and %d are not CoPrime Numbers\n", num1, num2);
    }
}
