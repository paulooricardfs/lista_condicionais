#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if((a==b)&&(a==c)&&(b==c)&&(a<b+c)&&(b<a+c)&&(c<b+a)){
        printf("eh equilatero");
    }
    else if(((a==b)||(b==c)||(a==c))&&(a<b+c)&&(b<a+c)&&(c<b+a)){
        printf("eh isosceles");
    }
    else if((a!=b)&&(b!=c)&&(a!=c)&&(a<b+c)&&(b<a+c)&&(c<b+a)){
        printf("eh escaleno");
    }
    else{
        printf("nao eh triangulo");
    }
    return 0;
}
