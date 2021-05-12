#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int antiga_hora, minutos, nova_hora;
    scanf("%d %d", &antiga_hora, &minutos);
    if((antiga_hora>=13)&&(antiga_hora<24)&&(minutos>=00)&&(minutos<=59)){
        nova_hora = antiga_hora - 12;
        printf("%02d\n%02d\npm", nova_hora, minutos);
    }
    else if((antiga_hora==00)&&(minutos>=00)&&(minutos<=59)){
        nova_hora=antiga_hora+12;
        printf("%02d\n%02d\nam", nova_hora, minutos);
    }
    else if((antiga_hora==12)&&(minutos>=00)&&(minutos<=59)){
        printf("%02d\n%02d\npm", antiga_hora, minutos);
    }
    else if((antiga_hora>=01)&&(antiga_hora<12)&&(minutos>=00)&&(minutos<=59)){
        printf("%02d\n%02d\nam", antiga_hora, minutos);
    }

    return 0;
}
