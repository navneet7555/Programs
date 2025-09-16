// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=1; i<=2*n+1; i++){
//         printf("*");
//     }
//     printf("\n");
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n+1-i; j++){
//             printf("*");
//         }for(int j=1; j<=2*i-1; j++){
//             printf(" ");
//         }for(int k=1; k<=n+1-i; k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int nst=n;
    int nsp=1;
    for(int i=1; i<=2*n+1; i++){
        printf("%d ", i);
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=nst; j++){
            printf("%d ", a);
            a++;
        }for(int k=1; k<=nsp; k++){
            printf(" ");
            a++;
        }for(int q=1; q<=nst; q++){
            printf("%d ",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}
