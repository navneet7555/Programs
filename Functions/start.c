#include<stdio.h>
int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);

    int c=sum(a,b);
    printf("%d", c);

    return 0;
}

int sum(int a, int b){
    return a+b;
}