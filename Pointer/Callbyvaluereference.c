#include<stdio.h>
void swapnum(int a, int b);
void valunum(int *a, int *b);
int main(){
    int x,y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    // Call by value( pArgument call)
    // swapnum(x,y);

    valunum(&x,&y); 
    printf(" x = %d & y = %d", x,y );

    return 0;
}

// Call by value
// void swapnum(int a, int b){
//     int c;
//     c=a;
//     a=b;
//     b=c;
//     printf("a = %d & b = %d", a, b);
// }

// Call by reference

void valunum(int *a, int *b){
    int c= *a;
    *a=*b;
    *b=c;
    // printf(" *a = %d" & *b = %d, &a, &b );
}