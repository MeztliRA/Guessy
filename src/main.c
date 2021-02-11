#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Guessy\n");

    printf("\nGuess the secret word, good luck!\n");

    int attempt = 5;

    char secret_word[] = "vivaldi";

    int win = 0;

    while (attempt != 0) {
        printf("\nEnter your guess[you have %d attempt left]: ", attempt);
        char guess[20];
        scanf("%s", guess);

        if (strcmp(guess, secret_word) == 0) {
            printf("\nCongratulation, you win!\n");
            attempt = 0;
            win = 1;
        } else {
            printf("\nWrong!\n");
            attempt -= 1;
        } 
    }
    
    if (attempt == 0 && win != 1) {
        printf("\nYou ran out of attempt, you lose\n");
    }
}