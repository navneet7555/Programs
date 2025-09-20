#include<stdio.h>
float convertTemp(float celsius);
int main(){
    int cel;
    printf("Enter the temperature in celsius: ");
    scanf("%d", &cel);

    printf("%f ",convertTemp(cel));

    return 0;
}

float convertTemp(float celsius){
    float fer = celsius*(9.0/5)+ 32;
    return fer;
}