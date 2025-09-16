#include<stdio.h>
int main(){
    int a, b;
    printf("Enter Dividend: ");
    scanf("%d", &a);
    printf("Enter Divisor: ");
    scanf("%d", &b);
    int q= a/b;
    printf("%d\n", q);
    int reaminder = a-b*q;
    printf("The Reaminder when %d divided by %d is: %d", a,b,reaminder);
    return 0;  

}