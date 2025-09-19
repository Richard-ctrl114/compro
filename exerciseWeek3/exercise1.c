#include <stdio.h>
    int main(){
        int num1, num2;
        int menu;
        printf("Enter num1 : ");
        scanf(" %d", &num1);
        printf("Enter num2 : ");
        scanf(" %d", &num2);
        printf("Calculator Menu :\n 1. + \n 2. - \n 3. * \n 4. / \n 5. %% \nChoose menu : ");
        scanf(" %d", &menu);
        printf("Ans : ");

        if(menu == 1){
            printf("Num1 + Num2 = %d\n", num1+num2);
        } else if (menu == 2){
            printf("Num1 - Num2 = %d\n", num1-num2);
        } else if (menu == 3){
            printf("Num1 * Num2 = %d\n", num1*num2);
        } else if (menu == 4){
            printf("Num1 / Num2 = %d\n", num1/num2);
        } else {
            printf("Num1 %% Num2 = %d\n", num1%num2);
        }
    
    return(0);
}