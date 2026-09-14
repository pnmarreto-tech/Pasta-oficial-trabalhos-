#include <stdio.h>

    int main (){

        int cp1,cp2,np1,np2;
        float valorun1, valorun2, vlt;

        scanf("%i %i %f", &cp1, &np1, &valorun1);
        scanf("%i %i %f", &cp2, &np2, &valorun2);
        vlt = ((np1*valorun1)+(np2*valorun2));
        printf("VALOR PAGO: R$ %.2f\n",vlt);

        return 0;
    }