#include<stdio.h>
int main(){
    int n;
    while(1){
    printf("Enter the number: ");
    scanf("%d", &n);
    int last_digit = n%10;
    int x=n/10;
    int new_value= x;
    int r=0,s=1;
    int num;
    while(x>0){
        if(x>0 && x<10){
            s=s+r;
            break;
        }
        num=x%10;
        r= r*10+num;
        x=x/10;
        s=s*10;
    }
    
    printf("The reverse is: %d\n\n", s*10+last_digit);
}
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n=12345;
//     int x;
//     while(n>10){
//         x=n/10;
//     }
//     n/=10;
//     printf("%d", x);
//     return 0;
// }