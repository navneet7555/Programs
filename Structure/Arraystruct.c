#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student ECE[100];
    ECE[0].roll=120;
    ECE[0].cgpa=9.0;
    strcpy(ECE[0].name, "XYZ");

    printf("%s", ECE[0].name);

    return 0;
}