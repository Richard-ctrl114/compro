#include<stdio.h>
int main(){
    char name[20], uniName[20];
    int age;
    float height;

    printf("Enter your full name: ");
    scanf("%[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your University name: ");
    scanf(" %[^\n]", uniName);

    printf("Hi! Everyone. This is K.%s from %s. I am %d years old and my height is %3.1f cm tall.\n",name,uniName,age,height);


    return (0);
}