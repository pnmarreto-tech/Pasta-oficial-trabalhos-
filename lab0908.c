#include <stdio.h>
#include <string.h>

    int main(){
        char x[100];
        fgets(x,sizeof(x),stdin);
        x[strcspn(x,"\n")]='\0';

        int limit = strlen(x);

        for(int i=0;i<limit;i++){
            if(x[i]== 'a'||x[i]=='A'||x[i]=='e'||x[i]=='e'||x[i]=='i'||x[i]=='i'||x[i]=='I'||x[i]=='o'||x[i]=='O'||x[i]=='u'||x[i]=='U'){
                x[i] = '-';
            }
            else {
                x[i] = '.';
            }
        }
        printf("%s\n",x);




        return 0;
    }