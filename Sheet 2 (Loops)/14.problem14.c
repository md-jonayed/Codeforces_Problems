// N. Numbers Histogram
#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    int loop;
    scanf("%d",&loop);
    int numbers[loop];
    for(int i=0;i<loop;i++){
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<loop;i++){
        int a = numbers[i];
        for(int i=1;i<=a;i++){
            printf("%c",c);
        }
        printf("\n");
    }
}