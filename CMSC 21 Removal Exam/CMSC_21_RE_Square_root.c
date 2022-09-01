#include <stdio.h>
#include <math.h>

int main(void)
{
     float yn, i;
     double x, result;

     printf("Enter the number you wish to find the square root of.\n");
     printf("\n");
     scanf("%f", &yn);

     x = yn/2;

     for (i = 0; i < 100; i++)
         x = x - (((x*x) - yn)/(2*x));
      result = fabs(x);
     printf("The square root of %.0f is %.4f.\n", yn, x);

     return 0;

}