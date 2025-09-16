// #include<stdio.h>
// int main(){
//     long int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int a=3;
//     for(int i=1;i<=n;i++){
//         printf("%d ", a);
//         a=a+3;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int a=100;
//     for(int i=1; i<=n; i++){
//         printf("%d ", a);
//         a=a-3;
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    float a=100;
    for(int i=1; a>n;i++){
        printf("%f ", a);
        a=a/2;
    }
    return 0;
}