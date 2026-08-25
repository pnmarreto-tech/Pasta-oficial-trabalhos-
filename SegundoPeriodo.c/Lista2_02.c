#include <stdio.h>
#include <string.h>

// struct "de dentro" (menor)
struct Data {
    int dia;
    int mes;
    int ano;
};

// struct "de fora" (maior), que contém o struct Data dentro dele
struct Livros {
    char nome[99];
    char editora[20];
    struct Data lancamento;   // <-- struct aninhado aqui
    int codigo;
};

int main(void) {
    struct Livros livro1;

    strcpy(livro1.nome, "Harry Potter");
    strcpy(livro1.editora, "Rocco");
    livro1.codigo = 1;

    // acessando o struct aninhado: usa ponto duas vezes
    livro1.lancamento.dia = 26;
    livro1.lancamento.mes = 6;
    livro1.lancamento.ano = 1997;

    printf("Livro: %s\n", livro1.nome);
    printf("Lancamento: %d/%d/%d\n",
           livro1.lancamento.dia,
           livro1.lancamento.mes,
           livro1.lancamento.ano);

    return 0;
}