#include<stdio.h>
#include<string.h>
// int main(){
//     char name[100];
//     printf("Enter the string:");
//     fgets(name, 100, stdin);
        //1. strlen 
//     printf("The length is %d", strlen(name));

//     return 0;
// }
    // int main(){
    //     char name[]= "Navneet ";
    //     char title[]= "Pandey ji";
    //     //2. strcpy(name, title);
    //     3. strcat(name, title);
    //     puts(name);
    //     return 0;
    // }
//4.
    int main(){
        char firststr[]= "PANDEY";
        char secondstr[]= "NAVNEET";
        printf("%d", strcmp(firststr, secondstr));
        return 0;
    }