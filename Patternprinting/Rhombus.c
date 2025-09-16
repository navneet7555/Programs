// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){

//         // Printing the space

//         for(int j=n-i; j>0; j--){
//             printf(" ");
//         }
//         // Printing the '*'

//         for(int k=1; k<=n; k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the rhombus: ");
    scanf("%d", &n);

    // Loop for upper triangle
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>0; j--){
            printf(" "); // Print leading spaces for rhombus shape
        }
        for(int j=1; j<=n; j++){
            if(j == 1 || j == n || i == 1 || i == n){
                printf("* "); // Print stars at the edges
            } else {
                printf("  "); // Print spaces inside for hollow effect
            }
        }
        printf("\n");
    }

    return 0;
}