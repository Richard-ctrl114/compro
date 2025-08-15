#include <stdio.h>
int main(){

    int num, sum;
    sum = 0;
    int i = 1;

    while (i <= 10){
        num = 0;
        printf("%d.Enter the number: ", i);
        scanf("%d", &num);
        sum += num;
        i ++;
    }

    printf("\ntotal sum is %d\n", sum);

    return 0;
}