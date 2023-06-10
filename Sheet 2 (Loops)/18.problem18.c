// S. Sum of Consecutive Odd Numbers
#include <stdio.h>
int main()
{
    int testCases;
    int sum = 0;
    scanf("%d", &testCases);
    for (int i = 1; i <=testCases; i++)
    {
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        int max, min;
        if (num1 > num2)
        {
            max = num1;
            min = num2;
        }
        else
        {
            max = num2;
            min = num1;
        }

        for (int i = min + 1; i <= max - 1; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
        sum=0;
    }
}