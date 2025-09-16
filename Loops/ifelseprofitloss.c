#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter the Selling Price: ");
    scanf("%d", &sp);
    printf("Enter the Cost Price: ");
    scanf("%d", &cp);
    if(sp>cp){
        printf("The seller has made profit of %d", sp-cp);
    }
    else if(cp>sp){   
        printf("The seller has made Loss of %d", cp-sp);
    }
    else{
        printf("No profit No loss");
    }
    return 0;
}