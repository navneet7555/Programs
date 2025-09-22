#include<stdio.h>
int reversenum(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[i] = secondval;
        arr[n-i-1] = firstval;
    }
}
void printrev(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}
    
    int main(){
        int arr[]= {1,2,3,4,5};
        reversenum(arr, 5);
        printrev(arr,5);
        return 0;
    }