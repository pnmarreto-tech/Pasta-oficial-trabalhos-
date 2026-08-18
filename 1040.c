#include <stdio.h>

    int main(){
            float n1,n2,n3,n4;
            double media,nexame,nvmedia;
            scanf("%f %f %f %f", &n1, &n2,&n3,&n4);
            media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
            printf("Media: %.1lf\n", media);
            
            if (media>=7.0){
                printf("Aluno aprovado.\n");
            }
            else if(media<5.0){
                printf("Aluno reprovado.\n");
            }
            else{
             printf("Aluno em exame.\n");
             scanf("%lf",&nexame);
             printf("Nota do exame: %.1lf\n", nexame);

             nvmedia = (nexame+media)/2;

             if (nvmedia>=5.0){
                printf("Aluno aprovado.\n");
             }
             else {
                printf("Aluno reprovado.\n");
                }
            }
            printf("Media final: %.1lf\n", nvmedia);
            
            return 0;
        }   