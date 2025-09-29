#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("tst.txt", "r");
    fclose(fptr);  //for closing
    if(fptr==NULL){
        printf("File doesn't exist!");
    }else{
        fclose(fptr);
    }
    return 0;
}