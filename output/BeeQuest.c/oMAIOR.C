#include <stdio.h>
#include <math.h>

  int main (){
    int a,b,c;
    int maiorab, maiorabc;
    scanf("%i %i %i", &a, &b, &c);
    maiorab = (a+b+abs(a-b))/2;
    maiorabc = (maiorab+c+abs(maiorab-c))/2;
    printf("%i eh o maior\n", maiorabc);

        return 0;
    }