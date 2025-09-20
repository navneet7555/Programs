#include<stdio.h>
void printHW(int value);
int main(){

    printHW(10);
}

void printHW(int value){
    if(value==0){
        return;
    }
    printf("HEllo WOrld\n");
    printHW(value-1);
}