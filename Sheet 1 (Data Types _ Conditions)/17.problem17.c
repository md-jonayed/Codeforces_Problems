// S. Interval
#include<stdio.h>
int main(){
    float number;
    scanf("%f",&number);
    if(number>=0 && number<=25){
        printf("Interval [0,25]\n");
    }
    else if(number>25 && number<=50){
        printf("Interval (25,50]\n");
    }
    else if(number>50 && number<=75){
        printf("Interval (50,75]\n");
    }
    else if(number>75 && number<=100){
        printf("Interval (75,100]\n");
    }
    else{
        printf("Out of Intervals\n");
    }
    
}