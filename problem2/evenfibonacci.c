#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int a = 1;
    int b = 1;
    int d = 0;
    int s = 0;
    while(b < 4000000)
    {
        d = b;
        b = a + b;
        a = d;
        
        if (b % 2 == 0)
        {
            s += b;
        }
    }
    printf("%i", s);
}