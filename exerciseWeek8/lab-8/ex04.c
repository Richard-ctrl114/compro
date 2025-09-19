#include <stdio.h>

int countVowels(char str[]){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++){
        char ch = str[i];
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
            count++;
        }
    }
    return count;
}

int main(){

    char str[100];

    printf("Input: ");
    scanf("%[^\n]", str);

    int countVowel = countVowels(str);

    printf("Output: Number of vowels: %d\n", countVowel);
    
    return 0;
}