// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int a=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             printf(" ");
//         }
//         for(int j=1; j<=a; j++){
//             printf("* ");
//         }
//         a=a+2;
//         printf("\n");
//     } 
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a=1;
    // int b=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=a; k++){
            printf("%d", k);
            // b=b+2;
        }
        a+=2;
        printf("\n");
    }
    return 0;
}