#include <stdio.h>
int main(){

    int num, sum;
    sum = 0;

    for (int i = 1; i <= 10; i++){
        num = 0;
        printf("%d.Enter the number: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("\ntotal sum is %d\nAverage is %2.2f\n", sum, (sum/10.0));

    return 0;
}