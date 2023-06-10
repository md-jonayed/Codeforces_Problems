// M. Lucky Numbers
#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int flag = 0, track=0;
    for (int i = num1; i <= num2; i++)
    {
        int temp = i;
        while (temp>0)
        {
            int digit = temp % 10;
            if (digit == 4 || digit == 7)
            {
                flag = 0;
            }
            else
            {
                flag = -1;
                break;
            }
            temp = temp / 10;
        }
        if (flag == 0)
        {
            printf("%d ", i);
            track = 1;
        }
    }
    if(track == 0){
        printf("%d\n",flag);
    }
}