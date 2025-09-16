#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the age: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    if(a>b){
        if(a>c){
            if(a>d){
                printf("a is greater");
            }else{
                printf("d is greater");
            }
        }else{
            if(d>c){
                printf("D IS GREATEST");
            }else{
            printf("c is greater");
            }
        }
    }else{
        if(b>c){
            if(b>d){
                printf("b is greater");
            }else{
                printf("d is greater");
            }
        }else{
            if(d>c){
                printf("D IS GREATEST");
            }else{
            printf("c is greater");
            }
        }
       
    }
    return 0;
}