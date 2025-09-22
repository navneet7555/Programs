#include<stdio.h>
int main(){
    int marks[2][3];
    marks[0][0]=1;
    marks[0][1]=2;
    marks[0][2]=3;

    marks[1][0]=4;
    marks[1][1]=5;
    marks[1][2]=6;

    printf("%d", marks[0][0]);
    return 0;
}