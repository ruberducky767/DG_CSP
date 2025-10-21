//DG 6th loop and arrays notes
// a loop is a continus cycal in a peace of code
// a for loop and a while loop
// an itiration is a process of reapeting instructions in code
//a collection of things in a list to reapet
// while or for
#include <stdio.h>
//for loop
int main(void){
    int nums[]={4,384,3,34,3,4,34,2,43};
    char candy[5][20]={"Skittles","butterfingers","rees's","twix","kitkat"};

    for (int x = 0; x < 11; x++){
        printf("%d\n", nums[x]);
    }
    for(int i=0; i<5; i++){
        printf("%s is my favorite candy\n", candy[i]);
    }
    for(int num = 1; num<11; num++){
        printf("%d\n", num);
    }

//while loop
    int goose = 6;
    int count = 0;
    while(count != goose){
        printf("duck\n");
        count++;
    }
    printf("goose");
    return 0;

}