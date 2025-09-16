#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }for(int k=1; k<=i; k++){
            printf("%d", k);
        }
        int a=i-1;
        for(int q=1; q<=i-1; q++){
            printf("%d", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             printf(" ");
//         }
//         for(int k=1; k<=i; k++){
//             printf("%c", (k-1)+ 'A');
//         }
//         // int a=i-1;
//         for(int l=i-1; l>=1; l--){
//             printf("%c",(l-1)+ 'A');
//             // a--;
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
    for(int i=1; i<=n;  i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<i; k++){
            printf("%c", k+64);
        }
        int a= i-1;
        for(int q=1; q<=i-1; q++ ){
            printf("%c", a+64);
            a--;
        }
        printf("\n");
    }
    return 0;
}