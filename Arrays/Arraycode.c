#include<stdio.h>
int main(){
    int marks[3];
    printf("Enter the marks1: ");
    scanf("%d", &marks[0]);

    printf("Enter the marks2: ");
    scanf("%d", &marks[1]);

    printf("Enter marks3: ");
    scanf("%d", &marks[2]);

    printf("Marks1 = %d, Marks2 = %d, Marks3 = %d", marks[0], marks[1], marks[2]);
    return 0;
}