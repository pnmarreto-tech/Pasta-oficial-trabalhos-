#include <stdio.h>

    int main(){
        int n,i;

        scanf("%d", &n);

        for (i=1;i<=10;i++){
         if(n>2 && n<1000){
            printf("%d X %d = %d\n",n,i,n*i);
         }
        }
        return 0;
    }