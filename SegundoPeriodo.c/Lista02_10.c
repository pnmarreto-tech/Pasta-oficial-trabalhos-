
#include <stdio.h>

#define MAX_ALUNOS 5
#define MAX_NOTAS 3
#define MEDIA_APROVACAO 6.0

struct aluno {
    int matricula;
    char nome[30];
    float nota[MAX_NOTAS];
    float media;
};

int main(void) {
    struct aluno alunos[MAX_ALUNOS];
    int i, j;

    // ---------- a) Entrada dos dados ----------
    for (i = 0; i < MAX_ALUNOS; i++) {
        printf("--- Aluno %d ---\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf("%29s", alunos[i].nome);

        float soma = 0;
        for (j = 0; j < MAX_NOTAS; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].nota[j]);
            soma += alunos[i].nota[j];
        }

        alunos[i].media = soma / MAX_NOTAS;
        printf("\n");
    }

    // ---------- b) Maior nota da primeira prova ----------
    int idx_maior_nota1 = 0;
    for (i = 1; i < MAX_ALUNOS; i++) {
        if (alunos[i].nota[0] > alunos[idx_maior_nota1].nota[0]) {
            idx_maior_nota1 = i;
        }
    }

    // ---------- c) Maior media geral ----------
    int idx_maior_media = 0;
    for (i = 1; i < MAX_ALUNOS; i++) {
        if (alunos[i].media > alunos[idx_maior_media].media) {
            idx_maior_media = i;
        }
    }

    // ---------- d) Menor media geral ----------
    int idx_menor_media = 0;
    for (i = 1; i < MAX_ALUNOS; i++) {
        if (alunos[i].media < alunos[idx_menor_media].media) {
            idx_menor_media = i;
        }
    }

    // ---------- Exibindo resultados ----------
    printf("\n=== RESULTADOS ===\n\n");

    printf("b) Aluno com maior nota na 1a prova: %s (nota: %.1f)\n",
           alunos[idx_maior_nota1].nome, alunos[idx_maior_nota1].nota[0]);

    printf("c) Aluno com maior media geral: %s (media: %.2f)\n",
           alunos[idx_maior_media].nome, alunos[idx_maior_media].media);

    printf("d) Aluno com menor media geral: %s (media: %.2f)\n",
           alunos[idx_menor_media].nome, alunos[idx_menor_media].media);

    // ---------- e) Aprovado ou reprovado ----------
    printf("\ne) Situacao de cada aluno:\n");
    for (i = 0; i < MAX_ALUNOS; i++) {
        printf("%s (media %.2f): ", alunos[i].nome, alunos[i].media);
        if (alunos[i].media >= MEDIA_APROVACAO) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}