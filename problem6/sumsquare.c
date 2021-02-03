#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    const int N = 100;

    int s1 = 0;

    for(int i = 1; i < N+1; i++)
    {
        s1 += i * i;
    }
    printf("%i\n" , s1);

    int s2 = N*(N+1)/2;

    float sum2 = s2 * s2;

    printf("%f\n" , sum2);

    printf("The difference is %.2f\n", sum2-s1);
}