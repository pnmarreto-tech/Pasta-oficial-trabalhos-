#include <stdio.h>
#include <string.h>

    int main(){

        char x[30];
        int aux;
        fgets(x,sizeof(x),stdin);
        x[strcspn(x,"\n")]='\0';
        int size= strlen(x);

        int j = size-1;
        int eh_palindromo = 1;
        for(int i=0;i<j;i++,j--){
            if(x[i]!=x[j]){
                eh_palindromo = 0;
                break;
            }
            else if(x[i]==x[j]){
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
        if(eh_palindromo==1){
            printf("a palavra %s e uma palindromo\n",x);
        }
        else {
            printf("a palavra %s nao e uma palindromo\n",x);
        }
        return 0;
    }