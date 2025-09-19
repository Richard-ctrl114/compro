#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

float findCirCumSize(float rad) {
    return 2.0 * M_PI * rad;
}

float findAreaSize(float rad) {
    return M_PI * (rad * rad);
}

int main(){

    float radius;

    //M_PI THIS IS MACHINE DEFINED PI >:D

    printf("Enter the radius in cm: ");
    scanf("%f", &radius);

    printf("Circumference: %.2f\n", findCirCumSize(radius));
    printf("Area: %.2f\n", findAreaSize(radius));

    return 0;
}// use cc ex01.c -lm