#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int min = a[0];
    for(int i=1;i<size;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    int count =0;
    for(int i=0;i<size;i++){
        if(a[i]==min){
            count++;
        }
    }
    if(count%2==0){
        printf("Unlucky\n");
    }
    else{
        printf("Lucky\n");
    }
}