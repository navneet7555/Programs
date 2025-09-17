// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         for(int j=65; j<=70; j++){
//             printf("%c",(char)j);
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
        for(int j=65; j<=70; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

// Reactangle 

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         for(int j=0; j<=n+1; j++){
//             printf("@ ");
//         }
//         printf("\n");
//     }
//     return 0;
// }