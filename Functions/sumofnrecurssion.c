#include<stdio.h>

int sum(int n);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // printf("The sum is: %d", sum(5));

    int finalsum = sum(n);
    printf("The sum is %d", sum(n));

    return 0;

}

int sum(int n){
    if(n<=0){
        return 0;
    }
    int sumNm1=sum(n-1);
    int sumN= sumNm1+n;
    return sumN;
}