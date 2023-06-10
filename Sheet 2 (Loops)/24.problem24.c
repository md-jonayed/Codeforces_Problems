// Y. Easy Fibonacci
#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int fib[size+5];
    
    fib[0]=0;
    fib[1]=1;
    for(int i=0;i<size;i++){
        if(i==0||i==1){
            printf("%d ",fib[i]);
        }
        else{
            fib[i]=fib[i-1]+fib[i-2];
            printf("%d ",fib[i]);
        }
    }

}


    // int number;
    // scanf("%d", &number);
    // int i = 0;
    // int j = 1;
    // printf("%d ", i);
    // printf("%d ", j);
    // for(int s=3;s<=number;s++)
    // {
    //     int result = i + j;
    //     printf("%d ",result);
    //     i = j;
    //     j = result;
    // }