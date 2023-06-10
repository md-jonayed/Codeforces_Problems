// U. Float or int
#include<stdio.h>
int main(){
    double number;
    int num;
    scanf("%lf",&number);
    num = number;
    if(num == number){
        printf("int %d\n",num);
    }
    else{
        printf("float %d %lf\n",num,(number-num));
    }
}