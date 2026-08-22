#include <stdio.h>

    int main(){
        int a,b,c,temp;
        int perimetro,area;

        scanf("%i %i %i", &a,&b,&c);
        if(a<b+c && b<a+c && c<b+a){
            perimetro = a+b+c;
            printf("Perimetro = %i\n", perimetro);
        }
           else {
            area = ((a+b)*c)/2.0;
            printf("Area = %i\n", area);
        }

        return 0;
    }