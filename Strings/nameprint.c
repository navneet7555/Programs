#include<stdio.h>
void printstring(char arr[]){
    for(int i=0; arr[i] !='\0'; i++){
        printf("%c\t", arr[i]);
    }
    printf("\n");
}
int main(){
    char firstname[]= "NAVNEET";
    char lastname[]= "PANDEY";

    printstring(firstname);
    printstring(lastname);

    return 0;
}