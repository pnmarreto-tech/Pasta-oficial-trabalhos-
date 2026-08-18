#include <stdio.h>

    int main(){
        int N,s,m,h;
        int resto;
        scanf("%i", &N);
        h = N/3600;
        resto= N%3600;
        m = resto/60;
        s= resto%60;
        printf("%i:%i:%i\n", h,m,s);

        return 0;
    }