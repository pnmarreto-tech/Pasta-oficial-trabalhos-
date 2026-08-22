#include <stdio.h>

    int main(){
        float i[6];
        int x,positivos=0;
        float media,soma=0;

        for(x=0;x<6;x++){
            if(scanf("%f", &i[x]) && i[x]>0) { positivos++;
            soma = soma + i[x];
            }
        }
       
        media = soma/positivos;

        printf("%i valores positivos\n", positivos);
        printf("%.1f\n", media);




        return 0;
    }