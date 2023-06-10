// F. Digits Summation
#include<stdio.h>
int main(){
    long long int a,b,d1,d2;
    scanf("%lld %lld",&a,&b);
    while(a>0){
        d1 = a%10;
        a/=10;
        break;
    }
    while(b>0){
        d2 = b%10;
        b/=10;
        break;
    }
    printf("%lld\n",d1+d2);
}