#include<stdio.h>
struct vector{
    int x;
    int y;
};

void calcsum( struct vector v1, struct vector v2, struct vector *sum){
    sum->x = v1.x + v2.x;
    sum->y = v1.y+ v2.y;

    printf("X = %d\n",sum->x);
    printf("Y = %d\n", sum->y);
}
int main(){
    struct vector v1={7,8};
    struct vector v2;
    printf("Enter the value: ");
    scanf("%d %d", &v2.x, &v2.y);
    struct vector sum={0};

    calcsum(v1,v2, &sum);
    return 0;
}