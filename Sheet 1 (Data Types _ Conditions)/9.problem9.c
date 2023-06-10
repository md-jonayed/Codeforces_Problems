// L. The Brothers
#include<stdio.h>
int main(){
    char first1[1001],second1[1001];
    char first2[1001],second2[1001];
    scanf("%s %s",first1,second1);
    scanf("%s %s",first2,second2);
    int i=0,flag=-1;
    while(second1[i]!='\0' || second2[i]!='\0'){
        if(second1[i]!=second2[i]){
            flag=-1;
            break;
        }
        else{
            flag=1;
        }
        i++;

    }
    if(flag==1){
        printf("ARE Brothers\n");
    }
    else{
        printf("NOT\n");
    }
}