// X. Two intervals
#include<stdio.h>
int main(){
    long long int a1,b1,a2,b2;
    scanf("%lld %lld %lld %lld",&a1,&b1,&a2,&b2);
    int c=-1;
    if((a1<a2 && b1<a2)|| (a2<a1 && b2<a1)){
        
        printf("%d\n",c);
    }
    else{
        long long int max,min;
        if(a1>a2){
            max = a1;
        }
        else{
            max = a2;
        }
        if(b1<b2){
            min=b1;
        }
        else{
            min = b2;
        }
        printf("%lld %lld\n",max,min);
    }
}