#include<stdio.h>
int main(){
    int Ram;
    printf("Enter the Ram's age: ");
    scanf("%d", &Ram);
    int Shyam;
    printf("Enter the Shyam's age: ");
    scanf("%d", &Shyam);
    int Ajay;
    printf("Enter the Ajay's age: ");
    scanf("%d", &Ajay);
    if(Ram>Shyam){
        if(Ram>Ajay){
            printf("Ram is Greater");
        }else{
            printf("Ajay is Greater");
        }
    }else{
        if(Shyam>Ajay){
            printf("Shyam is Greater");
        }else{
            printf("Ajay is Greater");
        }
    }
    return 0;
}