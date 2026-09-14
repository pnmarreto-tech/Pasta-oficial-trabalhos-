#include <stdio.h>

    int main(){
        int n01,n02,n03,n04,n05,n06,n07,real,resto;
        
            scanf("%i", &real);
            if(0<real && real<1000000){
                printf("%i\n", real);
                n01= (real/100);
                printf("%i nota(s) de R$ 100,00\n", n01);
                resto = (real%100);
                n02 = (resto/50);
                printf("%i nota(s) de R$ 50,00\n", n02);
                resto = (resto%50);
                n03 = (resto/20);
                printf("%i nota(s) de R$ 20,00\n", n03);
                resto = (resto%20);
                n04 = (resto/10);
                printf("%i nota(s) de R$ 10,00\n", n04);
                resto = (resto%10);
                n05 = (resto/5);
                printf("%i nota(s) de R$ 5,00\n", n05);
                resto = (resto%5);
                n06 = (resto/2);
                printf("%i nota(s) de R$ 2,00\n", n06);
                resto = (resto%2);
                n07 = (resto/1);
                printf("%i nota(s) de R$ 1,00\n", n07);
                resto= (resto%1);
            }

        return 0;
    }