#include <stdio.h>
#include <string.h>

    int main(){
        int y;
        char x[51];
        fgets(x,sizeof(x),stdin);

        if(scanf("%i",&y) !=1){
            return 1;
        }
        switch (y){
            case 1:
            printf("%d\n",strlen(x));
            break;
            case 2:
            for(int i = 0; x[i] != '\0';i++){
                if (x[i]=='\n'){
                    x[i]='\0';
                    break;
                }
            }
            printf("string modificada: %s\n",x);
            break;
        }

        return 0;
    }