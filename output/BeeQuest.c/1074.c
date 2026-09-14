#include <stdio.h>

    int main (){
        int N,x,i;
       scanf("%i",&N);
      for(i=0;i<N;i++){
        scanf("%i",&x);
        if (x==0){
            printf("NULL\n");
        }
         else if(x%2==0 && x>0){
            printf("EVEN POSITIVE\n");
        }
        else if(x%2==0 && x<0){
                printf("EVEN NEGATIVE\n");
        }
        else if (x%2!=0 && x>0){
            printf("ODD POSITIVE\n");
        }
        else {
            printf("ODD NEGATIVE\n");
        }
       
        }
        return 0;
    }