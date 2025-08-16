#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0 && n < 101){
        if (n%2 == 0){
            printf("%d is even\n", n);
        } else {
            printf("%d is odd\n", n);
        }
    } else {
        printf("%d is out of range\n", n);
    }

    return 0;
}