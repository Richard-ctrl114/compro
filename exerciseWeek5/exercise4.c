#include <stdio.h>
int main(){

    char letter;
    int vowel, alphabet, count;

    count = 0;
    vowel = 0;
    alphabet = 0;

    for (int i = 0; i < 10; i++){
        printf("\n Enter letter a-z : ");
        scanf(" %c", &letter);
        if((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u')){
            vowel ++;
        } else {
            alphabet ++;
        }
    }

    printf ("\n***Result***\n");
    printf ("Vowel (a, e, i, o, u) = %d\n", vowel);
    printf ("Other letter = %d\n", alphabet);

    return 0;
}