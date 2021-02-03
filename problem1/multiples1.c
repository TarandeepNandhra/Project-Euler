#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int s = 0;
    for(int i = 0; i < 1000; i++)
    {
        if( i%3 == 0 || i%5 == 0)
        {
            s += i;
        }
    }
    printf("The total is %i", s);
}