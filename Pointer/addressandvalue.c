#include<stdio.h>
int main(){
    int age=1;
    int *ptr= &age;

    // printf("%p\n", &age);
    printf("%u\n", age);
    printf("%u\n", *ptr);

    return 0; 
}