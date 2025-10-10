//DG 6th conditionals notes
#include <stdio.h>
#include <string.h>
/*
< less than
> greater than
<= less than or equal too
>=greater than or equal to
==equal to
!= not equal to
logical oporators
&& and 
|| or
! not
*/
int main(void){
    int grade; 
    char name[50];
     printf("what is your grade: ");
    scanf("%d", &grade);

    printf("what is your name");
    scanf("%s", &name);
    //printf ("%d\n",strcmp(name, "Ms.larose"));
    if(strcmp(name, "Ms.larose")==0){
        printf("you dont have a grade");
    }

    if(grade >= 90){
        printf("you have an A!\n");
    }else if (grade >=80){
        printf("you have a B :(\n");
    }else{
        printf("you dont have an A");
    }
    return 0;
}