#include <stdio.h>
#include <string.h>
#include <ctype.h>

    int main(){

        char x[21];
        fgets(x,sizeof(x),stdin);
            x[strcspn(x,"\n")]='\0';
            
        for(int i=0;x[i]!='\0';i++){
            if (isdigit(x[i])){
                printf("%c",x[i]);
            }
        }
        printf("\n");

        return 0;
    }