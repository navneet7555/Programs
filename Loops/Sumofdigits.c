#include<stdio.h>
int main(){
int n;
printf("Enter the number: ");
scanf("%d", &n);
printf("The digit you Entered is %d\n", n);
int sum=0;
// int lastDigit=0;
while(n!=0){
    // lastDigit=n%10;
    sum=sum+n%10;
      n=n/10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}