#include<stdio.h>
struct complex{
    int real;
    int imag;
};

int main(){
    struct complex number1={2,6};
    struct complex *ptr= &number1;
    printf(" real part = %d\n", ptr->real);
    printf("Imag part = %d", ptr->imag);
    return 0;
}