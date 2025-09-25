#include<stdio.h>
#include<string.h>
typedef struct Computerscience{
    char name[100];
    int roll;
    float cgpa;
}coe;
int main(){
    // coe s1={"Navneet", 33, 8.2};(Can also be written as this: )
    coe s1;
    s1.roll=33;
    s1.cgpa=8.2;
    strcpy(s1.name, "NAvneet");
    printf("Name=%s", s1.name);
    return 0;
}