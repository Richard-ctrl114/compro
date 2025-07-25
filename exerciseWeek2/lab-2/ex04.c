#include<stdio.h>
int main(){
    char name[20];
    int stID;
    float programScr;
    float phyScr;
    float calcScr;

    printf("Enter your name: ");
    scanf("%[^\n]", name);
    printf("Enter your student ID: ");
    scanf("%d", &stID);
    printf("Enter your Programming score: ");
    scanf("%f", &programScr);
    printf("Enter your Physics score: ");
    scanf("%f", &phyScr);
    printf("Enter your Calculus score: ");
    scanf(" %f", &calcScr);

    printf("Hi %s(%d)! Your GPA is %.2f\n", name, stID, (programScr+phyScr+calcScr)/3);

    return(0);
}