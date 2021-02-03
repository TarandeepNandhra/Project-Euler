#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int a = 0;
    int b = 0;
    
    for(int i = 123456; i<123458; i++)
    {
        // %1000 gets the last 3 digits
        printf("%i\n" , i%1000);
        
        for(int c = 0; c < 6; c++)
            {
                printf("%i\n", i % 10);
                i /= 10;
            }
        
    }
}