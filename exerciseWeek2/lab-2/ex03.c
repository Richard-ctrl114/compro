#include<stdio.h>
int main(){
    char name[20], education_Q[20], gender;
    int age;
    float height;
    int weight;

    printf("Enter your name: ");
    scanf("%[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your gender: ");
    scanf(" %c", &gender);
    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]", education_Q);
    
    printf("\nName = %s\n", name);
    printf("Age = %d\n", age);
    printf("Gender = %c\n", gender);
    printf("Height = %f\n", height);
    printf("Weight = %d\n", weight);
    printf("Education = %s\n", education_Q);

    return (0);
}