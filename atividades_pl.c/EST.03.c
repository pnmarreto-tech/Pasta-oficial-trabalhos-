#include <stdio.h>

void imprimir_nome(const char *nome) {          //"essa função só vai ler o conteúdo apontado por nome, nunca vai modificar//
    printf("Nome: %s\n", nome);
    // nome[0] = 'X';  // ERRO: não pode alterar, porque é const
}

int main(void) {
    char meuNome[] = "Joao";
    imprimir_nome(meuNome);
    return 0;
}