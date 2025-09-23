#include<stdio.h>
int countlength(char arr[]){
int count=0;
for(int i=0; arr[i]!='\0'; i++){
    if(arr[i]=='A'){
    count++;
    }
}
    return count-1;
}
int main(){
    char name[100];
    printf("Enter the string: ");
    fgets(name, 100, stdin);

    printf("The length is %d", countlength(name));

    return 0;
}