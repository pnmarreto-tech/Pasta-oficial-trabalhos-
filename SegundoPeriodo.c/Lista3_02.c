#include <stdio.h>
#include <string.h>

    struct atletas{
        float altura[10];
        float media;
    };
    
     void function1(struct atletas *Altura){
        float soma=0;
        for(int i=0;i<10;i++){
            soma+=Altura->altura[i];
        }
        Altura-> media = ((soma)/10.0);
        }

    int main(){
        struct atletas Altura;
        for(int i=0;i<10;i++){
            scanf("%f",&Altura.altura[i]);
        }
          function1(&Altura);
        printf("Media geral: %.2f\n",Altura.media);

        return 0;
    }



