#include <stdio.h>
#include <string.h>

    int main(){

        char x[]="admin";
        char y[]="a1b2C3";
        char w[20],z[20];

        fgets(w,sizeof(w),stdin);
        fgets(z,sizeof(z),stdin);

        if(strcmp(w,x)==0){
            printf("usuario correta\n");
        }
        else {
            printf("usuario incorreto\n");
        }
         if(strcmp(z,y)==0){
            printf("senha correta\n");
        }
        else{
            
            printf("senha incorreta\n");
        }
       

        return 0;
    }