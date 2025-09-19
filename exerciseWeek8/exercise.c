/*#include <stdio.h>
#include <math.h>
int main(){

    float letter[3];
    double s;

    for(int i = 0; i < 3; i++){
        printf("please enter a single digit number (%d/3)\n", i+1);
        scanf("%f", &letter[i]);
    }

    double solveForS(void){
        s = letter[0] + letter[1] + letter[2];
        s /= 2;
        re
    }

    solveForS();

    printf("%f", s);

    return 0;
}*/
#include <stdio.h>
#include <math.h>

float triangle_area(float, float, float);

int main(){
    float a, b, c, area;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    area = triangle_area(a, b, c);
    printf("Area of the triangle = %.2f\n", area);
    return 0;
}

float triangle_area(float a, float b, float c){
    float s = (a + b + c) / 2.0;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}