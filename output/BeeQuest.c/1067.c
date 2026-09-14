#include <stdio.h>

    int main(){

        int i,impares;

        scanf("%i", &i);
        impares = 1;

        do{
            if (impares%2!=0){
            printf("%i\n", impares);   
            }
            impares++; 
        }
        while (impares<=i);
       








        return 0;
    }