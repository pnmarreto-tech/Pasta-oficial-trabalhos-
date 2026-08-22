#include <stdio.h>

    int main(){
        int vm,t;
        double d;
        scanf("%i", &t);
        scanf("%i", &vm);
        d= (t*vm)/12.0;
        printf("%.3lf\n", d);

        return 0;
    }