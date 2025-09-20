#include<stdio.h>
int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter frist number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);

    int s=sum(a,b);

    printf("The sum is: %d", s);

}

int sum(int x, int y){
return x+y;
}