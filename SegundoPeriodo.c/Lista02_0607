#include<stdio.h>
#include <string.h>


    struct Aluno{
         float notas[3];
         int matricula;
          int faltas;
    }aluno;

    int main(void){

        float media;

        printf("Digite as suas notas: \n");
        scanf("%f %f %f",&aluno.notas[0],&aluno.notas[1],&aluno.notas[3]);
        printf("Digite o numero de faltas: \n");
        scanf("%i",&aluno.faltas);

        media = ((aluno.notas[0]+aluno.notas[1]+aluno.notas[2])/3.0);


        if(media>=6.0 || aluno.faltas<17){
            printf("Aprovado\n");
        }else{printf("Reprovado\n");}

        return 0;
    }