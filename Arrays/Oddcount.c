#include<stdio.h>
int countOdd(int arr[], int n);
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    //print total numbers and count also

    int count= countOdd(arr,9);
    printf("Total odd numbers are %d\n", count);

    //Only Count pf numbers
    // printf("%d", countOdd(arr,9));

    // countOdd(arr, 9); //total numbers of odd 
    
    return 0;

}

int countOdd(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            printf("%d\n", arr[i]);// Should be comment out when only count is printed
            count++;
        }
    }
    return count;
}    