#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int n, x1;
    double accuracy, term, denominator, x, sinx, sinval;

    for(int i=0;i<2;i++){
         printf("Enter the value of x (in degrees) \n");
    scanf("%lf", &x);
    x1 = x;
    /*  Converting degrees to radians */
    x = x * (3.142 / 180.0);
    sinval = sin(x);

    printf("%lf is the results\n",sinval);
    }



}
