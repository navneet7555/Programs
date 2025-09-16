// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     if(n%5==0){
//         printf("Yes, It is devisible by 5.");
//     }else{
//         printf("No, It is not divisible by 5.");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year%4==0){
        printf("It is a leap year.");
    }else{
        printf("It is not a leap year.");
    }
    return 0;
}