#include <stdio.h>

    int main(){

        float p = 1.20, pe = 0.90, nvh;
        int ano = 0;

        do{
            p+=0.02;
            pe+=0.03;
            ++ano;
            printf("A altura de pedro e %.2f\n", p);
            printf("A altura de paulo e %.2f\n", pe);
        }
        while(pe<p);
        
        printf("Paulo superou pedro em %i\n anos.", ano);
        printf("A diferenca de altura entre pedro e paulo e %.2f\n", (nvh=pe-p));

        return 0;
        }  