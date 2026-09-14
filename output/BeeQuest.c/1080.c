#include <stdio.h>

    int main(){

        int x[10],i,temp,poscl;

        for(i=0;i<100;i++){
                 scanf("%d", &x[i]);
            if (i==0){
                temp = x[i];
                poscl = i;
            }
            else {
                if (x[i]>temp){
                    temp = x[i];
                   poscl = i;
                }
            }        

        }

         printf("%d\n", temp);
         printf("%d\n", poscl+1);
    

         return 0;

    }
       