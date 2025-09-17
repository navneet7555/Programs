#include<stdio.h>
// int main(){
//     int n;
//     printf("Enter thye number: ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             printf(" ");
//         }
//         for(int k=1; k<=2*i-1; k++){
//             if(i==n || k==2*i-1 || k==1){
//             printf("*");
//             }
//             else{
//                 printf(" "); 
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n%2==0){
        n=n+1;
    }
    int x=n-2;
    for(int i=1;i<=n/2+1;i++){
        for(int j=0;j<(n/2)-i;j++){
            printf(" ");
        }
        for(int j=0;j<=2*i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        for(int j=0;j<x;j++){
            printf("*");

        }

        x-=2;
        
        printf("\n");
    }
}