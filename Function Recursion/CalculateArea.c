#include<stdio.h>
#include<math.h>

float squreArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main(){
     float a = 5.0;

    printf("area squre is :%f\n", squreArea(a));
    

    float rad = 5.0;
    printf("area of circle is : %f\n",circleArea(rad));

    float l = 5.0;
    float b = 10.0;
    printf("area of rectangle is : %f", rectangleArea(l, b));

    return 0;

}

float squreArea(float side){
return pow(side, 2);
}

float circleArea(float rad){
    return 3.14 * pow(rad, 2);
}

float rectangleArea(float l, float b){
    return l * b;
}