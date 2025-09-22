#include<stdio.h>
int main(){
    int age= 22;
    int price=23;
    int *ptr= &age;
    int *pptr=&price;
    
    printf("Difeerence of %u and %u is: %u\n",ptr, pptr, ptr-pptr);
    pptr=&age;
    printf("Comparison %u and %u is: %u\n", ptr, pptr, ptr == pptr);
    return 0;
}