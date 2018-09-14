#include <stdio.h>

void perimeter(float l, float w)
{

   printf("\nPerimeter is %.2f\n", (2*l) + (2*w));

}

void area(float l, float w)
{

   printf("\nArea is %.2f\n", l * w);

}

void volume(float l, float w, float h)
{

   printf("\nThe volume is %.2f\n", l * w * h);

}

void averagecost(float c, int q) 
{

    printf("\nThe volume is %.2f\n", c / q);

}