#include <stdio.h>
int main(){

    int x, sum = 0;

    do {
        printf("Enter a number: ");
        scanf("%d", &x);

        sum += x;

       } while (x != 0);
        
    printf("result : %d\n", sum);

    return 0;
}