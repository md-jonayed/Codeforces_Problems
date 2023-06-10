// H. Two numbers
#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    float c = ceil(a/b);
    float r = round(a/b);
    float f = floor(a/b);
    printf("floor %.0f / %.0f = %.0f\n",a,b,f);

    printf("ceil %.0f / %.0f = %.0f\n",a,b,c);

    printf("round %.0f / %.0f = %.0f\n",a,b,r);
}