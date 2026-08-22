#include <stdio.h>

    int main(){
        int a,b,c,temp;
        int oa,ob,oc;
        scanf("%i %i %i", &a, &b, &c);

        oa = a;
        ob = b;
        oc = c;

        if (a>b){
            temp = a;
            a = b;
            b = temp;
        }
        if(a>c){
            temp = a;
            a = c;
            c = temp;
        }
        if (b>c){
            temp = b;
            b = c;
            c = temp;
        }
    
        printf("%i\n", a);
        printf("%i\n", b);
        printf("%i\n", c);

        printf("\n");
        
        printf("%i\n", oa);
        printf("%i\n", ob);
        printf("%i\n", oc);







        return 0;
    }