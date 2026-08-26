#include <stdio.h>
#include <string.h>
#include <ctype.h>


      struct Ficha_Cliente{
        char nome[20];
        char localizacao[30];
        char Email[30];
        char curso[20];
        char categoria[20];
        int urgencia;
    }cliente;

    int main(void){
        printf("Digite o seu nome: \n");
        scanf("%s",cliente.nome);
        printf("Digite a sua localicao: \n");
        scanf("%s", cliente.localizacao);
        printf("Digite o seu email: \n");
        scanf("%s", cliente.Email);
        printf("Digite qual curso vc pertence: \n");
        scanf("%s", cliente.curso);
        printf("Digite a sua categoria: \n");
        scanf("%s", cliente.categoria);
        printf("Digite qual eh o seu nivel de urgencia: \n");
        scanf("%i", &cliente.urgencia);

        
        for(int i=0; cliente.curso[i]!='\0';i++){
            cliente.curso[i] = toupper(cliente.curso[i]);
        }

        printf("Nome: %s\n", cliente.nome);
        printf("Localizacao: %s\n", cliente.localizacao);
        printf("Email: %s\n",cliente.Email);
        printf("Curso: %s\n", cliente.curso);
        printf("Categoria: %s\n",cliente.categoria);


        switch(cliente.urgencia){
            case 1:
            printf("Urgencia baixa\n");
            break;
            case 2:
            printf("Urgencia media\n");
            case 3:
            printf("Urgencia alta, entraremos em contato em 24 hr\n");
            break;
        }




        return 0;
    }
