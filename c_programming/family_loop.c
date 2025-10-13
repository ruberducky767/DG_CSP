//DG 6th family loop
#include <stdio.h>

int main(void){
    char family [5][20]={"Dad","Mom","Dominik","Xander","Adalynn"};
    for (int i=0; i<5; i++){
        printf("hello %s \n", family[i]);
    }
    return 0;
}
