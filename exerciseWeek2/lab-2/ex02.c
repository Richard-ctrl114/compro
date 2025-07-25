#include<stdio.h>
int main(){
    int minutes;
    printf("Enter total minutes: ");
    scanf("%d", &minutes);
    printf("%d minutes is %d hour(s) and %d minute(s)\n",minutes,minutes/60,minutes%60);

    return(0);
}