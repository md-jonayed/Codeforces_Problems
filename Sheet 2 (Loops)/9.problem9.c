// I. Palindrome
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int temp = number;
    int digits,inverse=0;
    while(temp>0){
        digits = temp%10;
        inverse = inverse*10+digits;
        temp = temp/10;   
    }
    printf("%d\n",inverse);
    if(number==inverse){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     // reverse the number and print it without leading zeroes
//     int reversed = 0;
//     while (n != 0) {
//         int digit = n % 10;
//         if (digit != 0 || reversed != 0) {
//             reversed = reversed * 10 + digit;
//         }
//         n /= 10;
//     }
//     printf("%d\n", reversed);

//     // check if the number is a palindrome
//     int original = reversed;
//     int is_palindrome = 1;
//     while (original != 0) {
//         int digit = original % 10;
//         if (digit != reversed % 10) {
//             is_palindrome = 0;
//             break;
//         }
//         original /= 10;
//         reversed /= 10;
//     }
//     if (is_palindrome) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }
