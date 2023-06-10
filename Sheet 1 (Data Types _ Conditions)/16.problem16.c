// R. Age in Days
#include<stdio.h>
int main(){
    int days;
    scanf("%d",&days);
    int years = (days/365);
    int temp=years;
    temp =  365 * years;
    int months = (days-temp)/30;
    int tempMonths = months;
    tempMonths = months*30;
    int day = (days-temp-tempMonths);
    printf("%d years\n%d months\n%d days",years,months,day);
}