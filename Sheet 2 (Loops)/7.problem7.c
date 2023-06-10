// G. Factorial
#include<stdio.h>
int main(){
    long long int testcases;
    scanf("%lld",&testcases);
    for(int i=1;i<=testcases;i++){
        long long int number,factorial=1;
        scanf("%lld",&number);
        for(int i=1;i<=number;i++){
            factorial = factorial*i;
        }
        printf("%lld\n",factorial);
    }
}