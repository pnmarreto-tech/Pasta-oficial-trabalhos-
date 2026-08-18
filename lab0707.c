#include <stdio.h>

    int main(){
     int i,n,prox;
     int a=1,b=1;
     
     scanf("%i", &n);

        for(i=0;i<n;i++){
            printf("%i", a);

            if(i<n){
                printf("-");
            }
            prox = a+b;
            a=b;
            b=prox;
        }

        return 0;
    }