// V. PUM
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number*4;i++){
        if(i%4==0){
            printf("PUM\n");
        }
        else{
            printf("%d ",i);
        }
    }
}