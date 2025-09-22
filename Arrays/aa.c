#include<stdio.h>
int main(){
    int age=22;
    int *ptr= &age;
    // printf("%u\n", &ptr);
    printf("%d\n", ptr);
    ptr++;
    printf("%d\n", ptr);
    return 0;
}