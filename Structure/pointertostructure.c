#include<stdio.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1={"Navneet", 33, 8.2};
    printf("Roll=%d\n", s1.roll);

    struct student *ptr= &s1;
    // printf("Name (with the pointer)= %s\n", (*ptr).name);
    printf("Name (with arrow)= %s\n", ptr->name);

    return 0;
}