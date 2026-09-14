#include <stdio.h>

    int main(){

        int ni=1,fat=1,n;
         scanf("%i", &n);
        
        do{
           fat = fat*ni;
            ni++;
        }
        while(ni<=n);
        printf("fatorial = %i\n", fat);

        return 0;
    }