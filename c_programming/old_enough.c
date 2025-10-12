//DG 6th old enough
#include <stdio.h>
#include <string.h>
int main(void) {
    char Age;
    char name[50];
    printf("what is your name:\n ");
    scanf("%49s",name);
    printf("welcome %s",name);
    printf(" how old are you.\n");
    scanf("%d", &Age);
    if(Age >= 100) {
        printf("your old enough to be in a museum!!!\n");
    } else if(Age >= 18) {
        printf("you can vote. good luck %s\n",name);
    } else if(Age >= 17) {
        printf("you can drive. dont crash!!\n");
    } else if(Age >= 15) {
        printf("you can get a drivers permit. spread you wings. dont crash!!!!!!!!!!!!\n");
    } else if(Age >= 5) {
        printf("you can go to school. Education is what remains after one has forgotten what one has learned in school.—Albert Einstein\n");
    } else {
        printf("GET OFF THE COMPUTER!!!!!!!");
    } 
    return 0;

}