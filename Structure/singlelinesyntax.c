#include<stdio.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1={"Navneet", 33, 8.2};
    printf("Name= %s",s1.name );
    return 0;
}