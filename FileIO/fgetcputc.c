#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("newstest.txt", "w");

    printf("%c \n", fgetc(fptr));
    fputc('M', fptr); 
    return 0;
}