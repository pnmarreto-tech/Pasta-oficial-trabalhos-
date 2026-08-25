#include <stdio.h>
#include <string.h>

    typedef struct Netflix{
       char Nome[50];
       char Genero[30];
       int  Ano;
       float nota;
       char sinopsi[200];
    }catalogo;

    int main(void){

        catalogo allmovie;
        strcpy(allmovie.Nome,"Jurassic Park");
        strcpy(allmovie.Genero, "Acao e Aventura");
        allmovie.Ano = 1999;
        allmovie.nota = 9.5;
        strcpy(allmovie.sinopsi,"Em Jurassic Park, um bilionário cria um parque em uma ilha isolada com dinossauros clonados a partir de DNA antigo. Quando um funcionário sabota o sistema de segurança durante uma visita de especialistas e crianças, os animais escapam, forçando os sobreviventes a lutar para escapar dos predadores");

        printf("Nome: %s \n", allmovie.Nome);
        printf("Genero:%s \n", allmovie.Genero);
        printf("Ano: %i \n",allmovie.Ano);
        printf("Nota: %.1f \n", allmovie.nota);
        printf("Sinopsi: %s \n", allmovie.sinopsi);


        return 0;
    }