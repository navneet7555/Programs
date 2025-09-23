#include<stdio.h>
int main(){
    // char name[50];
    // printf("Enter the first name: ");
    // scanf("%s", name);
    // printf("Your name is %s", name);

    char name[50];
    fgets(name,100, stdin);
    // gets(name);
    puts(name);

    return 0;
}