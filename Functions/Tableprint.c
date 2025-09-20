#include<stdio.h>
 void printTable(int n);
 
 int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printTable(n); //Argument(Taking/Actual Parameters)

 }
 void printTable(int x){   //Formal parameter
    for(int i=1; i<=10; i++){
        printf("%d\n",i*x);
    }
 }