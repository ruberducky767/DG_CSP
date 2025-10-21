//DG 6th functions notes
// a function is a bloock of code that can be used for repeting a singel step so it can be used over and over instead of typing it over and over
//we use functions to code a set of instructions multipule times so we dont have to type it multipule times
// arguments and puramiters are like calling a function
// a  peramiter tells the code to expect a argument and an argument is what the funtion does and both together make a function
// peramiter allways starts the function and the argument is the main of the function
// a return function ends the function
// the return statment makes a function more of a set of rules
//the return function ends the function, it raps it up
#include <stdio.h>

void birthday(char* name, int age){
  printf("happy birthday to you\n");
    printf("happy birthday to you\n");
    printf("happy birthday dear %s\n", name);
    printf("happy birthday to you\n");
    printf("happy birthday %s is now %d\n",name,age);    
}

int add(int num_one, int num_two){
    return num_one + num_two;
}

char* get_name(void){
    char name [50];
    printf("what is your name:");
    scanf("%s",name);
    return name;
}
float get_num(void){
    float num;
    printf("tell me a number: ");
    scanf("%f", &num);
    return num;
}

int main(void){
    birthday("Mykel",15);
    birthday("Lucas",40);
    birthday("Victoria",19);
    char* user= get_name();
    int addition = add(5,4);
    printf("%d\n", addition);
    printf("%d\n", add(50,37));
    float our_number = get_num();
    printf(" %f\n", our_number);
        return 0;
}
// replaces the call