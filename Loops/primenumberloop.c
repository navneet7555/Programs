// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int a=0;
//     for(int i=2; i<=n-1; i++){
//         if(n%i==0){
//             a=1;
//             break;
//     }
// }
//     if(n==1){
//         printf("1 is neither prime nor composite");
//     }
//     else if(a==0){
//         printf("The number is Prime. ");
//     }else{
//         printf("The number is Composite. ");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1;i<=n; i=i+2){
        // if(i%2!=0){
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}