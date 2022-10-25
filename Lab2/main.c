#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;

    printf("Enter x:");
    scanf("%lf", &x);

    if( x>= 3 && x < 10)
    y=4*log(pow(x,2)/2)-sqrt(x);

    else if( x>= 200 && x< 2000 )
    y=log10(x/2)+fabs(4-pow(x,2)/2*x-1);

    else if( x>= 2000 && x< 2500 )
    y=-4*sin(x/2)-cos(x+1);
    else
        y=x-0.5;

    system("cls");
    printf("x = %lf", x);
    printf("\ny = %lf", y);
    return 0;

}
