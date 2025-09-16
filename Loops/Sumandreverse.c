#include<stdio.h>
int main(){
    int n, original_n;
    printf("Enter the number: ");
    scanf("%d", &n);

    original_n = n;

    int sum=0;
    int r=0;
    while(n!=0){
        sum=sum+n%10;
        // r=r*10;
        r=r*10+n%10;
        n=n/10;
    }
    // r=r/10;
    printf("The sum of the given number is %d\n", sum);
    printf("The Reverse of the number is %d\n", r);
    printf("Sum of both are %d", original_n+r);
    return 0;
}