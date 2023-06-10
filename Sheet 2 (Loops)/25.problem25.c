// Z. Three Numbers
#include<stdio.h>
int main(){
    int k,s,c=0;
    scanf("%d %d",&k,&s);
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            if(s-i-j>=0 && s-i-j<=k){
                c++;
            }
        }
    }
    printf("%d\n",c);

}