// G. Palindrome Array
#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int flag = 0;

    for (int i = 0; i <= size / 2; i++)
    {
        if (a[i] == a[size - 1 - i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}