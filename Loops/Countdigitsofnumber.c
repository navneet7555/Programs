#include<stdio.h>
int main(){
    int n=1;
    while(1){
        if(n==-1){
            break;
        }
    printf("Enter the number: ");
    scanf("%d", &n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("The number of digits are %d \n\n", count);
}
}