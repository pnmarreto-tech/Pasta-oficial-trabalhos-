#include <stdio.h>
#include <string.h>

    int main(){

        char x[100];
        int somadevogais=0;
        fgets(x,sizeof(x),stdin);
        x[strcspn(x,"\n")]='\0';

        int limite = strlen(x);
        for (int i=0;i<limite;i++){
            if(x[i]== 'a'||x[i]=='A'||x[i]=='e'||x[i]=='e'||x[i]=='i'||x[i]=='i'||x[i]=='I'||x[i]=='o'||x[i]=='O'||x[i]=='u'||x[i]=='U'){
                somadevogais++;
            }
        }
        printf("a palavra %s possue %i vogais\n",x,somadevogais);


        return 0;
    }