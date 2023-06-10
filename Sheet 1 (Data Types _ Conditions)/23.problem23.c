// // // Y. The last 2 digits

// #include <stdio.h>

// long long int print_last_two_digits(long long int n)
// {

//     long long int temp;

//     if (n <= 9)
//         printf("%lld", n);
//     else
//     {

//         temp = n % 100;
//         if (temp <= 9)
//         {
//             printf("0%lld", temp);
//         }
//         else
//         {

//             printf("%lld", temp);
//         }
//     }
// }

// int main()
// {
//     long long int a, b, c, d, mul, total = 0;
//     scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
//     mul = a * b * c * d;

//     print_last_two_digits(mul);
// }


#include<stdio.h>
int main(){
    long long int a,b,c,d,m;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    a= a%100;
    b= b%100;
    c= c%100;
    d= d%100;
    m = (a*b*c*d)%100;
    if(m<10){
        printf("0");
        printf("%lld\n",m);
    }
    else{
        printf("%lld\n",m);
    }
}