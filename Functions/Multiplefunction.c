#include<stdio.h>
// #include<math.h>

float areasquare(float side);
float areacircle(float radius);
float arearectangle(float length, float breadth);
int main(){

    float side=10;
    printf("The area of square is %f\n", areasquare(side));

    float radius=12;
    printf("The area of circle is %f\n", areacircle(radius));

    float length=5;
    float breadth=8;
    printf("The area of rectangle is %f", arearectangle(length, breadth));

    return 0;
}

float areasquare(float side){
// return side*side;
side=side*side;
return side;
}

float areacircle(float radius){
    return 3.14*radius*radius;
}

float arearectangle(float length, float breadth){
    return length*breadth;
}
