#include<stdio.h>
int countvow(char arr[]){
    int count= 0;
    for(int i=0; arr[i]!='\0'; i++){ 
        if(arr[i]=='A'|| arr[i]=='E'||arr[i]=='I' || arr[i]=='O'|| arr[i]=='U' ){
            // printf("%c", arr[i]);
            count++;
        }
        printf("\n");
    }
    return count;
}
int main(){
    char arr[]="HELLOWORLD";
    printf("Total Vowels are %d", countvow(arr));
    return 0;
}