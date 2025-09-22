#include<stdio.h>
int main(){
    float item[3];
    printf("1st item price: ");
    scanf("%f", &item[0]);

    printf("2nd item price: ");
    scanf("%f", &item[1]);

    printf("2nd item price: ");
    scanf("%f", &item[2]);

    printf("Total price of item1: %f\n", item[0]+ (0.18* item[0]));
    printf("Total price of item2: %f\n", item[1]+ (0.18* item[1]));
    printf("Total price of item3: %f\n", item[2]+ (0.18* item[2]));
    
    return 0;
}