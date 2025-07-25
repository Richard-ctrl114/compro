#include<stdio.h>
int main(){
    float point;
    char name;
    int integer;

    printf("Please enter an integer value: ");
    scanf("%d",&integer);
    printf("You entered %d\n", integer);
    printf("Please enter a float value: ");
    scanf("%f",&point);
    printf("You entered %f\n", point);
    printf("Please enter a character: ");
    scanf(" %c", &name);
    printf("You entered: %c\n", name);

    return (0);
}