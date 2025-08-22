#include <stdio.h>
int main(){

    int number[10];

    for (int i = 0; i < 10; i++){

        printf("Enter the value %d here: ", i);
        scanf("%d", &number[i]);

    }

    printf("\nValues in array are: ");

    for (int i = 0; i < 10; i++){

        printf("%d", number[i]);
        if (i == 9){break;}
        printf(", ");

    }

    printf("\n");

    return 0;
}