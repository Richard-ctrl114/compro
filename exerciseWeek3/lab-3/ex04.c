#include <stdio.h>
int main(){
    char name[20], grade;
    float calScr, phyScr, sciScr, avgScr;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your Calculus score: ");
    scanf("%f", &calScr);
    printf("Enter your Physic score: ");
    scanf("%f", &phyScr);
    printf("Enter your Science score: ");
    scanf("%f", &sciScr);

    avgScr = ((calScr + phyScr + sciScr) / 3);

        if (avgScr >= 80){
            grade = 'A';
        } else if (avgScr >= 70 && avgScr < 80){
            grade = 'B';
        } else if (avgScr >= 60 && avgScr < 70){
            grade = 'C';
        } else if (avgScr >= 50 && avgScr < 60){
            grade = 'D';
        } else {
            grade = 'F';
        }

    printf("%s, your average is %2.2f. You got grade %c.\n", name, avgScr, grade);

    return 0;
}