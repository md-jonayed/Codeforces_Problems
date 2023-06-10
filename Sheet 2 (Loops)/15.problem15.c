// O. Pyramid
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        int a = i;
        for(int i=1;i<=a;i++){
            printf("*");
        }
        printf("\n");
    }
}