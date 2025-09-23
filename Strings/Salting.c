#include<stdio.h>
#include<string.h>
void salting(char password[]){
    char salt[]="123";
    // char newpass[100];

    // strcpy(newpass, password);
    strcat(password, salt);
    puts(password);
}
int main(){
    char pass[100];
    printf("Enter the password:");
    scanf("%s", pass);

    salting(pass);
    return 0;
}