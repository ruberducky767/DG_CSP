//DG 6th name decoder
#include <stdio.h>
#include <string.h>
int main(void){
    char name[100];
    printf("please tell me your name: ");
    scanf("%s", name);
    char decor[100];
    printf("type random letters numbers in a pattern: ");
    scanf("%s", decor);
    printf("%s",name, "%s");
    return 0;
}