#include<stdio.h>
int main(){
int age=22;
int *ptr= &age;
int _age= *ptr;

printf("The value at address of pointer is %d", _age);

return 0;
}
