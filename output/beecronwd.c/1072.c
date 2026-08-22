#include <stdio.h>

    int main(){
        int x,x1,in,out;
        in=0;
        out=0;
        
        scanf("%i", &x);
        for (int i=0;i<x;i++){
            scanf("%i", &x1);
            if(x1>=10 && x1<=20){
                in++;
            }
            else{
                out++;
            }
        }
        printf("%d in\n", in);
        printf("%d out\n", out);

     return 0;
    }