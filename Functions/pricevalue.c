#include<stdio.h>

void calculateprice(float value);

int main(){
    float value;
    printf("Enter the price: ");
    scanf("%f", &value);

    calculateprice(value);
    printf("Value is %f", value);
    return 0;

}
void calculateprice(float value){
    value= value+(value*0.18);
    printf("Final price is: %f\n", value);
}