#include <stdio.h>
#include <string.h>

    int main(){

        char STR[16]="brave and bolt",nSTR[20];
        strncpy(nSTR,STR,15);
        printf("%s", nSTR);








        return 0;
    }