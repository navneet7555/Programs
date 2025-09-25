#include<stdio.h>
#include<string.h>
    struct student{
        char name[100];
        int roll;
        float cgpa;
    };

    int main(){
    struct student s1;
    struct student s2;
    struct student s3;

    s1.roll=33;
    s2.roll=34;
    s3.roll=35;

    s1.cgpa=8.2;
    s2.cgpa=8.1;
    s3.cgpa=8.0;

    strcpy(s1.name, "Navneet");
    strcpy(s2.name, "Krishna");
    strcpy(s3.name, "Gokul");

    printf("Student name= %s\n", s1.name);
    printf("Student name= %s\n", s2.name);
    printf("Student name= %s\n", s3.name);

    printf("Student roll= %d\n", s1.roll);
    printf("Student roll= %d\n", s2.roll);
    printf("Student roll= %d\n", s3.roll);

    printf("Student cgpa= %f\n", s1.cgpa);
    printf("Student cgpa= %f\n", s2.cgpa);
    printf("Student cgpa= %f\n", s3.cgpa);
    
    return 0;
}