#include <stdio.h>

    int main(){
        int codigo,qt;
        double x;
        scanf("%i %i", &codigo, &qt);
    
        switch(codigo){
            case 1:
            x = (qt*4.00);
            break;
            case 2:
            x = (qt*4.50);
            break;
            case 3:
            x = (qt*5.00);
            break;
            case 4:
            x = (qt*2.00);
            break;
            case 5:
            x = (qt*1.50);
            break;
        }
        printf("Total: R$ %.2lf\n", x);

        return 0;
    }