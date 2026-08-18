#include <stdio.h>

int main(){

    int x, y,maior,menor,i,soma=0;
    scanf("%i",&x);
    scanf("%i",&y);
    if(x>y){
        maior = x;
        menor =y;
    }
    else if(y>x){
        maior = y;
        menor = x;
    }

    for(i=menor+1;i<maior;i++){
        if(i%2!=0){
        soma =soma+i;
        }
        
    }
   
    printf("%i\n",soma);

    return 0;
}