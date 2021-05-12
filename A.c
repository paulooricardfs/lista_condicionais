#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if((a<=c)&&(a<=d)&&(b<=c)&&(b<=d)){
        printf("Pousa, bilu");
    }
    else{
        printf("Procura outro lugar, bilu");
    }


    return 0;
}
