#include <stdio.h>

    int main(){

        for( int i=0;i<=20;i+=2){
            for( int j=10;j<=30;j+=10){
                 float di = i/10.0;
                 float dj = (i+j)/10.0;
                if(i%10==0){
                    printf("I=%.0f J=%.0f\n",di,dj);
                }
                else {
                    printf("I=%.1f J=%.1f\n",di,dj);
                }
            }
        }
        return 0;
    }