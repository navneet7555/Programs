#include<stdio.h>
void presentch(char str[],char ch){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==ch){
            printf("Character is present!");
            return;
        }
    }
    printf("Character is not present!");
}
int main(){
    char str[]="Helloworld";
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    presentch(str,ch);
    return 0;
}