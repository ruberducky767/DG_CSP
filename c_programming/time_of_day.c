#include <stdio.h>

int main(void){
    int mil_time;
    printf("What is the time of day in military time (ex 09:30 or 15:30)\n");
    if (scanf("%d", &mil_time) != 1) {
    }

    if (mil_time < 0 || mil_time > 2359) {
        printf(" military time error. learn how to read a clock solder!!: %d\n", mil_time);
    }

    printf("Ok so the hour is %4d\n",mil_time);// i dont know why it keeps doing double space
    printf("good job solder.\n");
    return 0;
}