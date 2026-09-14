#include <stdio.h>

    int main(){
        int A,B,convert;

        scanf("%i %i", &A,&B);

        if(B>A){
        convert = (B-A);
        }
        else if(A>B){
            convert = ((24-A)+B);
        }
        else {
            convert = 24;
        }
        printf("O JOGO DUROU %i HORA(S)\n",convert);


        return 0;
    }