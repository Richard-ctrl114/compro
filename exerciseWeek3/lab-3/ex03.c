#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch(n){
        case 1 ... 100:
            switch(n%2){
                case 0: 
                    printf("%d is even\n", n);
                    break;
                default:
                    printf("%d is odd\n", n);
                    break;
            }
            break;
        default:
            printf("%d is out of range\n", n);
    }
    return 0;
}