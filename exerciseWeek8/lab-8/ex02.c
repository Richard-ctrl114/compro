/*#include <stdio.h>
#include <math.h>

int findPrime(int num1, int num2){

}

int main(){

    int primeInit, primeFinal;
  
    printf("Enter the start and end numbers: ");
    scanf("%d %d",&primeInit, &primeFinal);
    
    return 0;
} // use cc ex02.c -lm*/


#include <stdio.h>

int isPrime(int num){
    int flag = 1;

    if (num <= 1){
        flag = 0;
    } else {
        for (int i = 2; i * i <= num; i++){
            if (num %i == 0){
                flag = 0;
                break;  
            }
        }
    }
    return flag;
}

void displayPrimes(int start, int end){
    printf("The prime numbers within the intervals are:\n");
    for (int i = start; i <= end; i++){
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(){
    int start, end;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    displayPrimes(start, end);

    return 0;
}