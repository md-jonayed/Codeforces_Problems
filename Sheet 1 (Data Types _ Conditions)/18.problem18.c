// T. Sort Numbers
#include <stdio.h>
int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long max , mid, min;
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            max = a;
            mid = b;
            min = c;
        }
        else
        {
            max = a;
            mid = c;
            min = b;
        }
    }
    else if (b >= a && b >= c)
    {
        if (c >= a)
        {
            max = b;
            mid = c;
            min = a;
        }
        else
        {
            max = b;
            mid = a;
            min = c;
        }
    }
    else if (c >= a && c >= b)
    {
        if (a >= b)
        {
            max = c;
            mid = a;
            min = b;
        }
        else
        {
            max = c;
            mid = b;
            min = a;
        }
    }

    printf("%lld\n%lld\n%lld\n", min, mid, max);
    printf("\n");
    printf("%lld\n%lld\n%lld\n", a, b, c);
}
