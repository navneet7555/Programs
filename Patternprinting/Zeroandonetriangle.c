// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         int a=1;
//         for(int j=1; j<=i; j++){
            
//         }
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf("%d ", j % 2); // Alternates between 1 and 0
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
        for(int j=1; j<=i; j++){
            printf("%d",a);
            a=1-a;
        }
        printf("\n");
    }
    return 0;
}