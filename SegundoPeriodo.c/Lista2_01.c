    #include <stdio.h>
    #include <string.h>

        typedef struct Livro{
            char nome[45];
            char editora[45];
            int codigo;
            float nota;
        }livro;

         int main(){
            
            livro allbook;
            strcpy(allbook.nome,"Harry Potter");
            strcpy(allbook.editora,"Orocco");
            allbook.nota = 9.5;

           printf("%s \n",allbook.nome);

            return 0;
        }