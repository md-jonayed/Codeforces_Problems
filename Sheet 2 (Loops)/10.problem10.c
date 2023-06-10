// J. Primes from 1 to n
#include <stdio.h>
int is_prime(int number){
    for (int j = 2; j <= number-1; j++)
        {
            if (number % j == 0)
            {
                return -1;
            }
        }
        return number;
}
int main()
{
    int number;
    scanf("%d", &number);
    for (int i = 2; i <= number; i++)
    {
        int result = is_prime(i);
        if(result==-1){
            continue;
        }
        else{
            printf("%d ",result);
        }
        
    }
}