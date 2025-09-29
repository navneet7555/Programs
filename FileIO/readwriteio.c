#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("newstest.txt", "w");

    // char ch[]="Navneet Pandey";
    // fscanf(fptr, "%s", &ch);
    // printf("Character = %s\n", ch);
    // // fscanf(fptr, "%s", &ch);
    // // printf("Character = %s", ch);

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n", 'A');
    fscanf(fptr, "%c", &ch); 
    printf("Character= %c\n", 'P');
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n", 'P');
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n", 'l');
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n", 'E');
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n", 'k');
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n", 'a');
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n", 'o');

    fclose(fptr);
    return 0;
}