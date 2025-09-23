#include<stdio.h>
void slice(char str[], int n, int m){
    char j=0;
    char newstr[100];
    for(int i=n; i<=m; i++, j++){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}
int main(){
    char coc[]="HELLOWORLD";
    slice(coc,3,6);
    return 0;
}