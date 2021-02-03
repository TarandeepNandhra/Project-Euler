#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// can generalise by getting int from user 

int main(void)
{
    int multiple = 0;
    int number_list[1000];
    
    // if multiple of 3 or 5 store into number_list.
    for(int i=0; i < 1000; i++)
    {
        if( i%3 == 0 || i%5 == 0)
        {
            number_list[multiple] = i;
            multiple++;
        }
    }
    //now add up the numbers
    int s = 0;
    for(int i=0; i < multiple; i++)
    {
        s = s + number_list[i];
    }
    printf("The total is %i", s);
}

