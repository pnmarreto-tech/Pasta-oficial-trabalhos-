#include <stdio.h>

    int main(){

        int impares=0,x;
        scanf("%i", &x);

        while(impares<6){

            if(x%2!=0){
                printf("%i\n", x);
            impares++;
            }
            x++;
        }

        return 0;
    }