#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n%2==0){
        n=n+1;
    }
    int nsp=n/2;
    int str= 1;
    int ml=n/2+1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }for(int k=1; k<=str; k++){
            printf("*");
        }if(i<ml){
            nsp=nsp-1;
            str= str+2;
        }else{
            nsp=nsp+1;
            str=str-2;
        }
        printf("\n");
    }
    return 0;
}