#include<stdio.h>
#include<string.h>
typedef struct information{
    int accountNo;
    char ifsc[50];
    char name[100];
}info;

int main(){
    info customer1;
    customer1.accountNo= 123456789;
    strcpy(customer1.ifsc, "ABCD");
    strcpy(customer1.name, "XYZ");

    printf("%d\n %s\n %s\n", customer1.accountNo, customer1.ifsc, customer1.name);

    info customer2;
    customer2.accountNo= 987654321;
    strcpy(customer2.ifsc, "ASDF236");
    strcpy(customer2.name, "NOISE");
    
    printf("%d\n %s\n %s\n", customer2.accountNo, customer2.ifsc, customer2.name);

    return 0;
}