// H. One Prime
#include<stdio.h>
int main(){
    int number,flag=-1;
    scanf("%d",&number);
    for(int i=2;i<number;i++){
        if(number%i==0){
            flag = 1;
            break;
        }
    }
    if(flag == -1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}