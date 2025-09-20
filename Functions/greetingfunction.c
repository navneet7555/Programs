#include<stdio.h>
 void namaste(){
    printf("Namaste...");
 }
 void Bonjour(){
     printf("Bonjour");
 }

//  void namaste(){
//     printf("Namaste...");
//     return;
//  }

//  void Bonjour(){
//     printf("Bonjour");
//     return;
//  }

 int main(){
    printf("Enter Nationality.. (i for Indian or f for French?)\n");
    char ch;
    scanf("%c", &ch);
    if(ch=='i'){
        namaste();
    }
    else if(ch=='f'){
        Bonjour();
    }else{
        printf("Nationality Not permitted!");
    }
    return 0;
 }

//  void namaste(){
//     printf("Namaste...");
//     return;
//  }

//  void Bonjour(){
//     printf("Bonjour");
//     return;
//  }