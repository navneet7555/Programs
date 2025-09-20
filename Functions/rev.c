#include<stdio.h>
int main(){
    float n,m;
    while(1){
        printf("Enter the First number: ");
        scanf("%f", &n);
        printf("Enter the Second number: ");
        scanf("%f", &m);
        if(m==0){
            printf("Second number can't be zero.\n");
        }

        float sum=n/m;
        if(sum-((int)(sum))==0){

        printf("%d\n", (int)(sum));}
        else{
            printf("%f\n",sum);
        }

    }
    return 0;
}