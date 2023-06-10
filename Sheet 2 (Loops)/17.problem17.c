// R. Sequence of Numbers and Sum
#include <stdio.h>
int main()
{
    while (1)
    {
        int a, b;
        int sum = 0;
        int max=0,min=0;
        scanf("%d %d", &a, &b);
        if(a>b){
            max=a;
            min=b;
        }
        else{
            max=b;
            min=a;
        }
        if (max <= 0 || min <= 0)
        {
            break;
        }
        else
        {
            for (int i = min; i <= max; i++)
            {
                printf("%d ",i);
                sum = sum + i;
            }
            printf("sum =%d\n",sum);
        }
    }
}