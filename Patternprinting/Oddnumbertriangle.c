// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int a=1;
//     for(int i=1; i<=n; i++){
//             for(int j=1; j<=n; j++){
//                 printf("%d ", a);       
//                 a=a+2;
//                 // Here it will continously print the value exceeding by the value by 2.
//             }
//             printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        // Here it will always intialize by 1 in every row.
        int a=1;
            for(int j=1; j<=i; j++){
                printf("%d ", a);       
                a=a+2;
                
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
//         for(int j=1; j<=2*n-1; j=j+2){
//         printf("%d ", j);
//     }
//     printf("\n");
//     }
//     return 0;
// }