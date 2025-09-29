#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("tttt.txt", "r");

    int n;
    fscanf(fptr, "%d", &n);
    printf("Number=%d", n);
    fscanf(fptr, "%d", &n);
    printf("Number=%d", n);
    fscanf(fptr, "%d", &n);
    printf("Number=%d", n);
    fscanf(fptr, "%d", &n);
    printf("Number=%d", n);
    fscanf(fptr, "%d", &n);
    printf("Number=%d", n);

    fclose(fptr);
    return 0;
}