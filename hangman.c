//HANGMAN GAME.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6

void print_hangman(int tries) {
    switch (tries) {
        case 0:
            printf("  _____\n  |   |\n      |\n      |\n      |\n      |\n=========\n");
            break;
        case 1:
            printf("  _____\n  |   |\n  O   |\n      |\n      |\n      |\n=========\n");
            break;
        case 2:
            printf("  _____\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========\n");
            break;
        case 3:
            printf("  _____\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========\n");
            break;
        case 4:
            printf("  _____\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========\n");
            break;
        case 5:
            printf("  _____\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========\n");
            break;
        case 6:
            printf("  _____\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========\n");
            break;
    }
}

int main() {
    char word[] = "mango";
    int word_length = strlen(word);
    char guessed[word_length + 1];
    for (int i = 0; i < word_length; i++) guessed[i] = '_';
    guessed[word_length] = '\0';

    int tries = 0;
    int correct_guesses = 0;
    char guess;
    
    printf("Welcome to Hangman!\n");

    while (tries < MAX_TRIES && correct_guesses < word_length) {
        printf("\nWord: %s\n", guessed);
        print_hangman(tries);
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        int found = 0;
        for (int i = 0; i < word_length; i++) {
            if (word[i] == guess && guessed[i] == '_') {
                guessed[i] = guess;
                correct_guesses++;
                found = 1;
            }
        }

        if (!found) {
            tries++;
            printf("Incorrect guess! You have %d tries left.\n", MAX_TRIES - tries);
        } else {
            printf("Good guess!\n");
        }
    }

    if (correct_guesses == word_length) {
        printf("\nCongratulations! You guessed the word: %s\n", word);
    } else {
        printf("\nGame Over! The word was: %s\n", word);
        print_hangman(tries);
    }

    return 0;
}
