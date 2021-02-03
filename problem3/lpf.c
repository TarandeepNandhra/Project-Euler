#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

bool isprime(int p);
void findprime(int a);

int main(void)
{
long n = 600851475143;
for(int i = 1; i < sqrt(n); i++)
{
    if( n % i == 0)
    {
        if (isprime(i) == true)
        {
            printf("A factor pair is %i and %li\n", i, n/i);
        }
    }
}
return 0;
}


bool isprime(int p)
{
    int c = 0;
    for(int i = 1; i < sqrt(p); i++)
    {
        if (p % i == 0)
        {
            c++;
        }
    }
    if(c == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}