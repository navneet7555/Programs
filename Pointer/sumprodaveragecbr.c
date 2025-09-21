// #include<stdio.h>
// void sum(int a, int b){
//     int c=a+b;
//     printf("Sum is: %d\n", c);
// }
// int product(int a, int b){
//     int c = a*b;
//     printf("Product is: %d\n", c);
// }
// int average(int a, int b){
//     int c = (a+b)/2;
//     return c;
// }
// int main(){
//     int a,b;
//     printf("Enter the numbers: ");
//     scanf("%d %d", &a, &b);

//      sum(a,b);
//      product(a,b);
//      printf("average= %d", average(a,b));

//     return 0;
// }

#include<stdio.h>
void dowork(int a, int b, int *sum, int *product, int *average){
    *sum=a+b;
    *product=a*b;
    *average=(a+b)/2;
}
int main(){
    int a=3, b=5;
    int sum, product, average;
    dowork(a,b,&sum, &product, &average);
    printf("sum= %d, product = %d, average =%d", sum, product, average);
    return 0;
}