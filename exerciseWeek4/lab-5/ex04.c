#include <stdio.h>
int main(){

    int arr[10], even = 0, odd = 0;

    for (int i = 0; i < 10; i++){
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0){
            even ++;
        } else {
            odd ++;
        }

    }

    printf("Even numbers: %d\nOdd numbers: %d\n", even, odd);

    return 0;
}