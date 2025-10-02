#include<stdio.h>
int main(){
    float n, m;
    char ch;
    while(1){
    printf("Enter the num1, num2: ");
    scanf("%f %f", &n, &m);
    // printf("%f   %f\n",n,m);
    // printf("%f   %f\n",n,m);
    if((int)(n)==0 && (int)(m)==0){
        printf("Good Bye\n");
        return 0;
    }
    printf("Enter the operation(+,-, *, /, %%)");
    scanf(" %c", &ch);
    if(m==0 && (ch=='/' || ch=='%')){
        printf("The denominator can't be zero with those operations!\n");
        //break;
        return 1;
    }
    if(ch=='+'){
        float a=n+m;
        if(a==(int)a){
            (float)(a)-(int)(a);
            printf("%d\n", (int)(a));
        }else{
            printf("%f\n",a);
        }
    }else if(ch=='-'){
        float b=n-m;
        if(b==(int)b){
            (float)b-(int)b;
            printf("%d\n", (int)(b));
        }else{
        printf("%f\n", b);
        }
    }else if(ch=='*'){
        float c=n*m;
        if(c==(int)c){
            (float)c-(int)c;
            printf("%d\n", (int)(c));
        }else{
        printf("%.2f\n", c);
        }
    }else if(ch=='/'){
        float d=n/m;
        if(d==(int)d){
            (float)d-(int)d;
            printf("%d\n", (int)d);
        }else{
        printf("%f\n", d);
        }
    }else if(ch=='%'){
        float e=(int)(n)%(int)(m);
        if(e==(int)e){
            (float)(e)-(int)(e);
            printf("%d\n", (int)e);
        }else{
        printf("%f\n", e);
        }
    }}
    return 0;
}