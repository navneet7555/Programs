#include<stdio.h>

void greet();
void away();

int main(){
    greet();
    away();
    return 0;

}

void greet(){
    printf("Hello!\n");
    return;
}

void away(){
    printf("Goodbye:)");
    return;
}