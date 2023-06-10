// G. Summation from 1 to N
#include <stdio.h>
int main()
{
    long long  number;
    scanf("%lld", &number);
    long long int sum = 0;
    sum = (number * (number+1))/2;
    printf("%lld\n", sum);
}
