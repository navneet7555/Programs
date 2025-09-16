#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    printf("The factorial of the given number is %d",product);
    return 0;
}
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int product=1;
//     for(int i=1;i<=n;i++){
//         product=product*i;
//         printf("The factorial of %d is %d\n",i,product);
//     }
//     return 0;
// }