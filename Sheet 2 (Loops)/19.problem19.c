// T. Shape2
#include<stdio.h>
int main(){
    int lines;
    scanf("%d",&lines);

    for(int row=1;row<=lines;row++){
        for(int col=1;col<=lines-row;col++){
            printf(" ");
        }
        for(int col=1;col<=2*row-1;col++){
            printf("*");
        }
        printf("\n");
    }
}