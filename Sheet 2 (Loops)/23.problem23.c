// // X. Convert To Decimal 2
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int testcases;
//     scanf("%d",&testcases);
//     for(int i=1;i<=testcases;i++){
//         int number;
//         scanf("%d",&number);
//         int temp=number;
//         int num=0;
//         while(temp>0){
//             int digits=temp%2;
//             if(digits==1){
//                 num=num*10+digits;
//             }
//             temp=temp/2;
//         }
//         int t=num,result=0,j=0;
//         while(t>0){
//             int digits = t%10;            
//             result = result + (digits*pow(2,j));
//             j++;
//             t=t/10;
//         }
//         printf("%d\n",result);
//     }
// }
#include<math.h>
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0;
        long long int sum=0;
        scanf("%d",&n);
        while(n>0){
            if(n%2==1){
                c++;
            }
            n=n/2;
        }
        for(int i=0;i<c;i++){
            sum = sum + pow(2,i);
        }
        printf("%lld\n",sum);
    }
}