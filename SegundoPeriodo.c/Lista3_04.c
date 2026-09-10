#include <stdio.h>
#include <string.h>

    struct Alunos{
        char nome[30];
        float notas;
    };

    int main(){
        struct Alunos nn[10];
        int limit=10;
        int maior;
        int posicao=0;
        for(int i=0;i<limit;i++){
            printf("Digite os nomes: \n");
            scanf("%s",nn[i].nome);
            printf("Digite as notas: \n");
            scanf("%f",&nn[i].notas);
        }
        maior=nn[0].notas;
        for(int i=0;i<limit;i++){
            if(nn[i].notas==maior){
                maior=nn[i].notas;
                posicao=i;
            }
        }
        printf("Maior nota: %.1f\n",maior);
        printf("Aluno: %s\n",nn[posicao].nome);

        return 0;
    }