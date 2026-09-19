#include <stdio.h>
#include <conio.h>

/* Nome da função: multiplica recebe como parâmetos dois valores inteiros (N1,N2)
objetivo: multiplicar os valores recebidos nos parâmetros.
retorno: um parâmetro inteiro (res) contendo o resultado
*/
    int multiplica(int n1, int n2){
        int resultado;
        resultado = n1*n2;
        return (resultado); //retorna o valor para main().
    }

    int main(void){
        int v1,v2,resultado;
        printf("Digite os dois valores: ");
        scanf("%d %d", &v1,&v2);

        resultado = multiplica(v1,v2);  //chama a função e recebe retorno
        printf("resultado  = %d\n", resultado);
        getch();

        return 0;

    }