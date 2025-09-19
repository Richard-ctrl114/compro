 #include <stdio.h>

 int square(int num) {
    return num * num;
}

int sum_of_squares(int a, int b) {
    return square(a) + square(b);
}

int main() {

    int num1, num2;

    printf("Enter the two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = sum_of_squares(num1, num2);

    printf("Sum of squares of %d and %d is %d\n", num1, num2, result);

    return 0;
}