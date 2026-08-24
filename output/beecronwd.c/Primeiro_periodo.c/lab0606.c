#include <stdio.h>

    int main(){
        int idade,sidade=0,qtd=0,soma18=0,qtd18=0;
        float media, media18;

        do{
            if (scanf("%i", &idade) && idade !=0){
          sidade= sidade+idade;
            qtd++;
            printf("soma= %i\n ", sidade);

                if(idade<=18){
                    soma18 = soma18+idade;
                    qtd18++;
                    printf("soma18= %i\n", soma18);
                }
            }
            else if(idade==0){
                printf("opercao encerrada.\n"); 
            }
        }
        while (idade!=0);{

            media= sidade/qtd;
            media18 = soma18/qtd18;

            printf("media = %.2f\n", media);
            printf("media do grupo de 18 = %.2f\n", media18);
        }










        return 0;
    }