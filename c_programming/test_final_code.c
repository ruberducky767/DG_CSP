// KR, SN, DG, VC - C Final Hangman Project
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void) {
    // Word bank (all 5-letter words)
    const char *words[] = {
        "ocean","water","white","ducky","kayze","early","smoke","train","layer",
        "alone","brain","craft","paint","flute","beach","heart","human","image",
        "lemon","lucky","mouse","metal","noise","plane","phone","power","quiet",
        "ready","store","sport","storm","today","table","under","video","watch",
        "young","slate","crane","brick","stare","raise","arise","bread"
    };
    int num_words = sizeof(words) / sizeof(words[0]);

    // Randomly choose a word
    srand(time(NULL));
    const char *word = words[rand() % num_words];
    int word_len = strlen(word);

    // Setup game variables
    char guessed[26] = {0};      // store guessed letters
    int strikes = 0;
    int correct = 0;
    char display[50];

    for (int i = 0; i < word_len; i++)
        display[i] = '_';
    display[word_len] = '\0';

    printf("Hi welcome to hangman!\nThis game consists of an unkown five letter word.\nFirst, begin to assemble the word by guessing one letter at a time.\nSecond, if you guess a letter that is not in the word, a strike will appear. If you gain 8 strikes, you're out.\nLastly, if you think you know the word, you can guess the whole word at once. Try to fill in the whole word with minimal strikes. Have fun playing!"); //victoria!\n");
    printf("Guess the 5-letter word. You have 8 strikes total.\n");

    // Counts how many strikes this could be a function maybe?
    while (strikes < 8 && correct < word_len) {
        printf("Word: ");
        for (int i = 0; i < word_len; i++)
            printf("%c ", display[i]);
        printf("\nStrikes: %d\n", strikes);

        printf("Guess a letter: ");
        char guess;
        scanf(" %c",&guess);
        guess = tolower(guess);

        // Check if letter was already guessed
        if (strchr(guessed, guess)) {
            printf("You already guessed '%c'!\n",guess);
            continue;
        }

        // Add to guessed letters
        int len = strlen(guessed);
        guessed[len] = guess;
        guessed[len + 1] = '\0';

        // Check if guess is in the word
        int found = 0;
        for (int i = 0; i < word_len; i++) {
           if (word[i] == guess) {
                display[i] = guess;
                found = 1;
                correct++;
            }
        }

        if (found)
            printf("Correct!\n");
        else {
            strikes++;
            printf("WRONG LETTER!\n");
        }
    }

    // Game 
    if (correct == word_len) {
        printf("You guessed the word: %s!\n", word);
    }else {
        printf("WOMP WOMP YOU LOST!!! The word was: %s\n", word);
    }

    return 0;
}