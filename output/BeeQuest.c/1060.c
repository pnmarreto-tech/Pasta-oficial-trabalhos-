#include <stdio.h>

    int main(){
        int i[6];
        int x,positivos=0;
        for(x=0;x<6;x++){
            if(scanf("%d",&i[x]) && i[x]>0 ) positivos++;
        }
        printf("%d valores positivos\n", positivos);

        return 0;
    }