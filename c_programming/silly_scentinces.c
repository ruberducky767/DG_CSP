//DG 6th silly sentences
#include <stdio.h>
#include <string.h>

int main(void) {
    printf("Don't add 'A' at the beginning of any of these: example: fish\n");

    char animal[100];
    printf("Type the first animal that comes to your head:\n");
    scanf("%99s", animal);

    char verb[100];
    printf("Type the first verb that comes to your mind:\n");
    scanf("%99s", verb);

    char big_object[100];
    printf("Think of a big object:\n");
    scanf("%99s", big_object);

    char small_object[100];
    printf("Think of a small object:\n");
    scanf("%99s", small_object);

    char sit[100];
    printf("Type an object that's soft and you can sit on:\n");
    scanf("%99s", sit);

    char drink[100];
    printf("Think of a drink:\n");
    scanf("%99s", drink);

    printf("You are walking your %s when your %s %s(s) up a %s(s), and tripped over a small %s and fell and hurt its knee. Then your %s fell off the %s and landed on a %s.\n", animal, animal, verb, big_object, small_object, animal, big_object, sit);
    printf("The end\n");
    return 0;
}