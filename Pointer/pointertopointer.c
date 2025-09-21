#include<stdio.h>
int main(){
    float price=200.00;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("The value is %f", **pptr);
    return 0;
}