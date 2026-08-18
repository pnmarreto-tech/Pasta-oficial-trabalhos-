#include <stdio.h>

    int main (){
        float media,h[5];
        float soma=0,maior,menor;

        for(int i=0;i<5;i++){
            printf("digite as alturas:\n", i+1);
            scanf("%f", &h[i]);
            soma+=h[i];

            if (i==0){
                maior=menor=h[i];
            }
            else {
                if(h[i]>maior){
                    maior=h[i];
                }
                if(h[i]<menor){
                    menor=h[i];
                }
            }
        }
        media = soma/5;
        printf("a menor altura e %.2f\n", menor);
        printf("a maior altura e %.2f\n", maior);
        printf("a media da altura do grupo e %.2f\n", media);

        return 0;
    }