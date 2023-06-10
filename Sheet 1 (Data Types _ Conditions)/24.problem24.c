// Z. Hard Compare
#include<stdio.h>
#include<math.h>
int main(){
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(b*log(a)>d*log(c)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

// long long int a,b,c,d;
//     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
//     if(pow(a,b)>pow(c,d)){
//         printf("YES\n");
//     }
//     else{
//         printf("NO\n");
//     }