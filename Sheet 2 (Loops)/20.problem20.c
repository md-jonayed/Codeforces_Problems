// U. Some Sums
#include <stdio.h>
int main()
{
    int number, r1, r2;

    int total = 0;
    scanf("%d %d %d", &number, &r1, &r2);
    for (int i = 1; i <= number; i++)
    {
        int sum = 0;
        int temp = i;
        while (temp != 0)
        {
            int digits = temp % 10;
            sum = sum + digits;
            temp = temp / 10;
        }
        if (sum >= r1 && sum <= r2)
        {
            total = total + i;
        }
    }
    printf("%d\n", total);
}