#include <stdio.h>
#include <string.h>

    int main(){

        char x[50];
        fgets(x,sizeof(x),stdin);
        x[strcspn(x,"\n")]='\0';
        int tamanho= strlen(x);

        int limite =(tamanho<4) ? tamanho:4;
        
        for(int i=0;i<limite;i++){
            printf("%c",x[i]);
        }

        return 0;
    }