#include <stdio.h>

void sumEvenOdd(int arr[], int n, int *evenSum, int *oddSum){
    *evenSum = 0;
    *oddSum = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            *evenSum += arr[i];
        } else {
            *oddSum += arr[i];
        }
    }
}

int main(){

    int n, i;

    printf("N: ");
    scanf("%d", &n);

    int arr[n];

    for (int idx = 0; idx < n; idx++){
        printf("Input: ");
        scanf("%d", arr + idx);
    }

    int evenSum, oddSum;
    sumEvenOdd(arr, n, &evenSum, &oddSum);

    printf("Output: Sum of even number: %d\n", evenSum);
    printf("Sum of odd number: %d\n", oddSum);

    return 0;
}