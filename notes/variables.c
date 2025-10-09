// DG 6th Variables notes
#include <stdio.h>

int main(void){
    int num ;
    const float pi = 3.14;
    char grade;//char will only hold one letter
    char name[20];
    //bool passing = true;
    printf("what is your letter grade: ");
    scanf("%c", &grade);

    printf("tell me a number: ");
    scanf("%d", &num);


    //printf("%d\n", num)
   // printf("%s has a %c grade in class")
    printf("what is your name: ");
    fgets(name, sizeof(name), stdin);

    printf("%d", num);
    printf("%s has a %c grade in the class!\n", name, grade);

    return 0;
}

//num=4  int and :
//int is what data it will hold
//string= 32 byt
//python is dynamice not static
//; acts as a period
// the main difference in c and python is
//a int is 4 a float is 4 byte double is 8byte and a char is 1 byte
// a string is a list of charicters
// float is f int is d byte is c and double is lf
/*python is the only code that doesnt let us do multi line comments*/