#include <stdio.h>
    int count;                     // count é uma variavel global//

    void function1(void);       // duas funções diferentes//
    void function2(void);

    int main(){             // main sempre vai retornar para int//
        count=100;
        function1();
    }
    void function1(void){
        int temp;
                                    // Aqui o valor de count é atribuido a temp(variavel local)
        temp=count;
        function2();                // pula para a função2 e depois volta//

        printf(" \ncount eh %i\n", temp);
    }
     void function2(void){
        int count;          // esse count é uma variavel local, ou seja, uma variavel declarada dentro de uma função com o mesmo nome da variavel global, tem mais prioridade a que foi delarada dentro da função//
        for(count=1;count<100;count++){
            printf("1");
        }
    }