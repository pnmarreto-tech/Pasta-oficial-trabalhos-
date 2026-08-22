    #include <stdio.h>

        int main(void){

             //Dados Básicos para a lingaugem C//

            int int_var= 100;    // o valor int possuí aproximadamente 16 bits (-32.767 a 32.767); sendo não aceito valores com o virgula ou maior que faixa //          
            char char_var= 'a';     //  o valor de float tem 32 bits (seis digitos de precisão) //       
            float flaot_var= 12.5;  // o valor de char tem 8 bits (-127 a 127) //
            double double_var= 8.44e+11; // o valor de double tem 64 bits (dez diggitos de precisão) //

            printf ("integerVar = %i\n", int_var);
            printf ("floatingVar = %f\n", flaot_var);  // o printf apresenta os valores das variaveis //
            printf ("doubleVar = %e\n", double_var);
            printf ("doubleVar = %g\n", double_var);
            printf ("charVar = %c\n", char_var);

            return 0;
        
        }

        