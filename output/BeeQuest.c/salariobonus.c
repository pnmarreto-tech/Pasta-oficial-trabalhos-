#include <stdio.h>

    int main () {
        char nome [100];
        double salario,venda, montante;

        scanf("%s", nome);
        scanf("%lf", &salario);
        scanf ("%lf", &venda);
        montante = salario + (venda * 0.15);
        printf("TOTAL = %.2lf\n", montante);

        return 0;
    }