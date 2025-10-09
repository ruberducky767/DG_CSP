//DG 6th strings notes
//%s=string
//stringcat=conctinat
//""for strings'' for single letters
//80\%
#include <stdio.h>
#include <string.h>

int main(void){

    char name[100] = "Xander";
    char last_name[25];//cant change will code is running
    char full_name[100];

    name[2]='j';//change cotents of a string
    printf("please tell me your last name: \n");
    scanf("%s", last_name);

    printf("[%s]\n", full_name);

    strcat(full_name, name);
    printf("[%s]\n", name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);

    strcmp(last_name, "dominik");//returns 0 if equal

    //to get the lenght of string
    printf("%zu\n", strlen(full_name));
    printf("%zu\n", sizeof(full_name));//how long the string can be
    

    

    return 0;
}