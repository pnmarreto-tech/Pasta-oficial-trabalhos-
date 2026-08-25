#include <stdio.h>
#include <string.h>

      struct Livros {
        char  nome[99];                     // Struct nome{variaveis0}variaveis1,variaveis2 estruturais;
        char editora[20];                   
        int ano;
        int codigo;                        // Struct é uma coleção de variáveis referenciados por um nome fornecendo uma maneira de ter informações agrupados//
    } livro1,*plivro;  

      struct Livros *plivro = &livro1;      // o ponteiro *plivro aponta para livro1//

    int main(void){

            printf("Digite o codigo do livro: \n");
            scanf("%i", &livro1.codigo);     // não necessita de endereço no caso de string//       // variavel_struct.variavel_nomeado //

            livro1.ano = 1994;
            strcpy(livro1.editora,"Rocco");
            strcpy(livro1.nome,"Harry Potter");

           
        switch(livro1.codigo){

            case 1:
                printf("Nome: %s \n", plivro->nome);        
                printf("Ano: %i \n", plivro->ano);
                printf("Editora: %s \n", plivro->editora);
        }



          
        return 0;
    }