#include <stdio.h>
int main(){

    int coneH, coneBaseR;
    float coneVol, pi;
    pi = 22.0 / 7;

    printf("Enter cone hight : ");
    scanf("%d", &coneH);
    printf("Enter cone base radius : ");
    scanf("%d", &coneBaseR);
    
    coneVol = (1.0 / 3) * pi * (coneBaseR * coneBaseR) * coneH;
    
    printf("Cone volume = %1.1f\n\n", coneVol);

    if (coneVol >= 260){
        printf("This cone is perfect for Supun project\n");
    } else {
        printf("This cone is not fit for this project\n");
    }

    return 0;
}