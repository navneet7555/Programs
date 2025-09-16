// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=n;i<=n*10;i=i+n){
//         printf("%d ", i);
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=4; i<=3*n+1;i=i+3){
        printf("%d ", i);
    }
    return 0;
}