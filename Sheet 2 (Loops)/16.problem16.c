// P. Shape1
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=number;i>=1;i--){
        int value = i;
        for(int i=value;i>=1;i--){
            printf("*");
        }
        printf("\n");
    }
}