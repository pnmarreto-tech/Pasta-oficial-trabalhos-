#include <stdio.h>

    int main(){
    int i,centena,dezena,unidade,soma;

    for(i=100;i<200;i++){
        centena = i/100;
        dezena = (i/100)%10;
        unidade = i%10;
        soma = centena+dezena+unidade;
        
        if(soma>10){
            printf("%i\n", i);
        }
        
        
    }
    return 0;

}