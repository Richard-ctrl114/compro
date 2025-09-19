#include <stdio.h>
int main(){

    int arr[8], max, min;

    //max = min = arr[0];

    for (int i = 0; i < 8; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] > max){
            max = arr[i];
        } else if (arr[i] < min){
            min = arr[i];
        }
    }

    printf("Smallest number: %d\nLargest number: %d\n", min, max);


    return 0;
}