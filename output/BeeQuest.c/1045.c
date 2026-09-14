#include <stdio.h>

    int main(){
        double A,B,C,temp;

        scanf("%lf %lf %lf", &A,&B,&C);

        if(A<B){
         temp=A;
         A=B;   
        }
        if(A<C){
          temp=A;
          A=C;
          C=temp;
        }
        if(B<C){
          temp=B;
          B=C;
          C=temp;
        }
        if (A>=B+C){
            printf("NAO FORMA TRIANGULO\n");
        }
        else{

          if((A*A)==((B*B)+(C*C))){
            prinft("TRIANGULO RETANGULO\n");
        }
          if((A*A)>((B*B)+(C*C))){
            printf("TRIANGULO OBTUSANGULO\n");
        }
         if((A*A)<((B*B)+(C*C))){
            printf("TRIANGULO ACUTANGULO\n");
        }
         if(A==B && B==C){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A==B || A==C || B==C){
            printf("TRIANGULO ISOSCELES\n");
        }
        
        }
        return 0;

    }