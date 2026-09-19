#include <stdio.h>
#include <conio.h>

    /*
    declaração de funções void, ou seja, sem retorno de algo com um valor estabelecido.   
    */
   /*Area de prótotipos*/
    void imprime_cabec(void);
    int multiplica(int n1,int n2);

    int main(void){
        int v1=0,v2=0,resultado=0;
        imprime_cabec();

        printf("Digite os valores: \n");
        scanf("%d %d",&v1,&v2);
        resultado = multiplica(v1,v2);
        printf("resultado = %d\n", resultado);
        getch();
        return 0;
    }

    void imprime_cabec(){
        printf("****************\n");
        printf("*       Linguagem C     *\n");
        printf("****************\n");
        return;
    }
    int multiplica(int n1,int n2){
        int resultado;
        resultado = n1*n2;
        return(resultado);
    }
   