//DG 6th variables practice
#include <stdio.h>
int main() {
    char name[20];
    printf("What is your name?\n");
    scanf("%19s", name);

    int number1;
    printf("Pick a number between 1 and 10:\n");
    scanf("%d", &number1);

    int number2;
    printf("Pick a number between 100 and 1000:\n");
    scanf("%d", &number2);

    char breakfast[20];
    printf("What did you have for breakfast?\n");
    scanf("%19s", breakfast);

    char color[20];
    printf("What is your favorite color?\n");
    scanf("%19s", color);

    char school[20];
    printf("What school do you go to?\n");
    scanf("%19s", school);

    int year;
    printf("What year is it?\n");
    scanf("%d", &year);

    char eyecolor[20];
    printf("What is your eye color?\n");
    scanf("%19s", eyecolor);

    int old;
    printf("How old are you?\n");
    scanf("%d", &old);

    char schoolsubject[20];
    printf("What is your favorite school subject?\n");
    scanf("%19s", schoolsubject);

    printf("Hello %s. Your number between 1 and 10 was %d, your number between 100 and 1000 is %d, you had %s for breakfast,\nand your favorite color is %s. You go to %s and the year is %d. Your eye color is %s, you are %d years old, and your favorite subject is %s.\n",
        name, number1, number2, breakfast, color, school, year, eyecolor, old, schoolsubject);

    return 0;
}