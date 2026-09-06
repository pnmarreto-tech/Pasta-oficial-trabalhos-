#include <stdio.h>
#include <string.h>

    struct alunos{
        char nome[30];
       float frequecia;
    };

    int main(){
         int limit=10;
        struct alunos chamada[limit];
        for(int i=0;i<limit;i++){
            printf("Digite o nome: \n Frequencia:\n");
            scanf("%29s %f",chamada[i].nome,&chamada[i].frequecia);
        }
        char nomesprocurados[10][30]={          //lembrar de usar uma matriz de 2d para substituir varios if..else
            "Pedro","Eduardo","Carlos",
            "henrique","Mateus","kamila",
            "Naruto","Sasuke","Kakashi",
            "Charles"
        };
        for(int i=0;i<limit;i++){
            for(int j=0;j<10;j++){
                 if(strcmp(chamada[i].nome,nomesprocurados[j])==0){
            printf("Nome: %s Frequencia: %.2f\n",chamada[i].nome,chamada[i].frequecia);
                }
            }
        }
       
        return 0;
    }


