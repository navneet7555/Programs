#include<stdio.h>
#include<math.h>
int main(){
    int n, square;
    printf("Enter the number: ");
    scanf("%d", &n);
    square= pow(n,3);
    printf("The square is %d", square);
    return 0;
}

// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n=4;

//     printf("%f", pow(n,3));
//     return 0;
// }