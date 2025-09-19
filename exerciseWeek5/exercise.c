#include <stdio.h>
int main(){

    char ch = 33;

    printf("Decimal     ASCII\n");

    for (int i = 33; i <= 55; i++){
        ch =+ i;
        printf("  %d          %c\n",i ,ch);
    }

    return 0;
}