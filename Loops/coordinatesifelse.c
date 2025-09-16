#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the co ordinates.....");
    scanf("%d %d",&x,&y );
    if(x==0 && y!=0){
        printf("It lies on y-axis.");
    }else if(y==0 &&  x!=0){
        printf("It lies on x-axis.");
    }else if(x==0 && y==0){
        printf("It lies at the origin.");
    }else{
        printf("It does not lies on any axis and at the origin.");
    }
    return 0;
}