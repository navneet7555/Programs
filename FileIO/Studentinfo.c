#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Informatio.txt", "w");

    char name[10];
    int roll;
    float cgpa;
    printf("Enter the name: ");
    scanf("%s", &name);
    printf("Enter the rollNo: ");
    scanf("%d", &roll);
    printf("Enter the cgpa: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "%s\n", name);
    fprintf(fptr, "%d\n", roll);
    fprintf(fptr, "%f\n", cgpa);

    fclose(fptr);
    return 0;

}