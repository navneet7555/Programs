#include<stdio.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

void studentinfo(struct student s2){
    printf("Information of Student\n");
    printf("Name=%s\n", s2.name);
    printf("roll=%d\n", s2.roll);
    printf("cgpa=%f\n", s2.cgpa);

}
int main(){
    struct student s1={"Navneet", 33, 8.2};

    studentinfo(s1);
    return 0;
}