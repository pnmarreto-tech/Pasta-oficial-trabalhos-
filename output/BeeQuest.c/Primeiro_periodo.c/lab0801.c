#include <stdio.h>

    int main(){
        int a[5]={1,0,5,-12,-55};
        int b[5]={a[0]+a[2]+a[4]};

        if (a[4]==-55){
            a[4] = 100;
        }
        printf("%i %i %i %i %i\n", a[0], a[1], a[2], a[3], a[4]);
        printf("%i\n", b[0]);

        return 0;
    }