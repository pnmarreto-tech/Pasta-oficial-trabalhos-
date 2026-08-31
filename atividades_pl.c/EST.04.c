#include <stdio.h>
#include <string.h>

    struct birthday{
        int age;
        char name[30];
        int year;
        char letter;
    };

    int main(){

        // create a structure variable and assign valeus to it;
        struct birthday s1={19,"Pedro",2007,'P'};

        // create another variable 
        struct birthday s2;
        // copy s1 valeus to s2;
        s2=s1;
        //change de valeus of s2;
        s2.age=20;
        s2.name[30]="Pedro_Neves";
        s2.year = 2008;
        s2.letter = 'E';

        //printf valeus
        printf("%i, %s, %i, %c\n",s1.age,s1.name[30],s1.year,s1.letter);
        printf("%i, %s, %i, %c\n",s2.age,s2.name[30],s2.year,s2.letter);


        return 0;
    }
