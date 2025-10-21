
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char guess(){
    user_input;
    add_to_guessed[] = {user_input, '\0'};
    printf("Guess a letter: ").lower().strip();
    scanf("%c",user_input);
    if(strcmp(user_input,"") == 0){
        printf("please enter a valid letter!");
        return 0;
    }else if(strcmp(user_input,guessed_letters) == 0){
        printf("You already guessed that letter!");
        return 0;
    }else if(strcmp(user_input == word) == 0){
        exit()printf("Hooray you guessed the word! rerun the code to play again!");
        return 0;    
    }else if strlen(user_input) > 1{
        printf("incorrect, guess only one letter");
        return 0;
    }else{
        strcat(guessed_letters,add_to_guessed);
    }if(strcmp(user_input,word) == 0){
        printf("correct!");
        return 0;
    }else{
        print("incorrect, guess again");
        return 1;
    }
}


int main(void){
    
    char words[49][245] = {"ocean","water","white","ducky","kayze","early","smoke","train", "layer","alone","brain","craft","paint","flute","beach","heart","human","image","lemon","lucky","mouse","metal","noise","plane","phone","power","quiet","ready","store","sport","storm","today","table","under","video","watch","young", "slate", "crane", "brick", "slate", "stare", "raise", "arise", "farts", "bread",}; 
    srand(time(NULL));
    for(int i=0; i<10; i++);
    char word = rand()%49;
    scanf("%s",word);
    printf("Hi welcome to hangman!\n This game consists of an unkown five letter word. First, begin to assemble the word by guessing one letter at a time. Second, if you guess a letter that is not in the word, a strike will appear. If you gain 8 strikes, you're out. Lastly, if you think you know the word, you can guess the whole word at once. Try to fill in the whole word with minimal strikes. Have fun playing!"); //victoria
    //word = random chosen word

    char space = "_";
    int strikes = 0;
    char guessed_letters[][];
    char output_list[][];
    

   // Dominik and Sophie
    while (strikes < 8){ //Sophie
        strikes += guess();
        printf("Strikes: %d ", strikes)};
    for (letter in word){
        if (letter in guessed_letters){
            output_list += letter}
        else:{
            output_list += space}}
    output = (' '.join(output_list));
    scanf("%s", output);
    printf(output);
    output_list = []
    if ' 'strcat(word).strip() == output{ //Dominik
        printf("Hoorray! You guessed the word! Rerun the code to play again.");
        break}
    else{
        continue};

    char (you_lost()){
        printf("You lost! The word was %s\n.", words);
    }
        return strikes + 1

    if (strikes == 8){
        you_lost()}
    
    
    return 0;
}
