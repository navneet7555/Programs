#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a=1;
    int b=1;
    int sum;
    if(n==1){
      printf("The 1st fibonacci number is %d\n", a);
    }else if(n==2){
        printf("The 2nd fibonacci number is %d\n", b);
    }
    for(int i=3; i<=n; i++){
        sum=a+b;
        a=b;
        b=sum;
        // printf("the %dth fibonacci number is %d\n",i, sum);
    }
    printf("the %dth fibonacci is %d",n, sum);
    return 0;
}