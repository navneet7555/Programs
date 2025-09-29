#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("sum.txt", "r");
    //Value of a and b should be in the file
    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    fptr= fopen("sum.txt", "w");
    fprintf(fptr, "%d", a+b);

    fclose(fptr);
    return 0;
}