#include <stdio.h>

    int main(){
        int dia,mes,ano,n,resto;
        scanf("%i", &n);
        ano = n/365;
        resto = n%365;
        mes = resto/30;
        dia = resto%30; 
        printf("%i ano(s)\n", ano);
        printf("%i mes(es)\n", mes);
        printf("%i dia(s)\n", dia);

        return 0;
    }