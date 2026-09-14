#include <stdio.h>
#include <math.h>

    int main (){
        double D, r1,r2;
        double A,B,C;    
        scanf("%lf %lf %lf", &A,&B,&C);
        D=((B*B)-4*A*C);
        if ((A!=0) && (D>=0)){
            r1=((-B+sqrt(D))/(2*A));
            r2=((-B-sqrt(D))/(2*A));
            printf("R1 = %.5lf\n", r1);
            printf("R2 = %.5lf\n", r2);
        }
        else{
           printf("Impossivel calcular\n");

        }

        return 0;
    }