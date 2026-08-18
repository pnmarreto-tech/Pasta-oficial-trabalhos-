#include <stdio.h>

int main() {

    int dia1, dia2;
    int h1, m1, s1;
    int h2, m2, s2;

    scanf("Dia %d", &dia1);
    scanf("%d : %d : %d", &h1, &m1, &s1);

    scanf("Dia %d", &dia2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    int inicio, fim, duracao;

    inicio = dia1 * 86400 + h1 * 3600 + m1 * 60 + s1;
    fim = dia2 * 86400 + h2 * 3600 + m2 * 60 + s2;

    duracao = fim - inicio;

    int dias, horas, minutos, segundos;

    dias = duracao / 86400;
    duracao %= 86400;

    horas = duracao / 3600;
    duracao %= 3600;

    minutos = duracao / 60;
    segundos = duracao % 60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}