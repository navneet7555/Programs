// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=1;  i<=n;  i++){
//         int a=1;
//         for(int j=1;  j<=n+1-i;  j++){
//             int d=a+64;
//             printf("%c ", (char)d);
//             a++;
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
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=n; j++){
            int b=a+64;
            printf("%c ", (char)b);
            a++;
        }
        printf("\n");
    }
    return 0;
}