#include<stdio.h>
int main(){
    int aadhar[5];
    //Input
    int *ptr= &aadhar[0];
    for( int i=0; i<5; i++){
        printf("Enter the value for index %d: ", i);
        scanf("%d", (ptr+i));
    }

    //Output
    for(int i=0; i<5; i++){
        printf("Value at index %d= %d\n", i, *(ptr+i));
    }
    return 0;
}  