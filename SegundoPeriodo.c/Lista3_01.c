#include <stdio.h>
#include <string.h>

    struct atletas{
        char nome[30];
        int pt_jogo;
        float altura;
    };

    int main(){

        struct atletas vt[5]={
        {"Pedro",4,1.67},
        {"Joao",6,1.70},
        {"Henrique",9,1.67},
        {"Carlos",3,1.90},
        {"Kihoo",5,2.10}
        };

        for(int i=0;i<5;i++){
            printf("Nome: %s\nPt_jogo: %i\nAltura: %.2f\n",vt[i].nome,vt[i].pt_jogo,vt[i].altura);
        }



        return 0;
    }