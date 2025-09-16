// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int c=2*n-1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<i; j++){
//             printf(" ");
//         }for(int k=1; k<=c; k++){
//             printf("*");
//         }
//         c-=2;
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
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