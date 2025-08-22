#include <stdio.h>
int main(){

    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;

    for (int idx = size; idx > 0; idx--){
        printf("%d ", original[idx - 1]);
    }

    return 0;
}