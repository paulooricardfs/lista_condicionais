#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int dia,mes,ano;
    scanf("%d %d %d",&dia,&mes,&ano);
    if((mes==2) && (dia<=29) &&(dia!=0) && (ano!=0) && (((ano%100!=0)&&(ano%4==0))||((ano%100==0)&&(ano%400==0)))){
            printf("valida");
    }
    else if(((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia<=30) &&(dia!=0) && (ano!=0) && (((ano%100!=0)&&(ano%4==0))||((ano%100==0)&&(ano%400==0)))){
            printf("valida");
    }
    else if(((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))&&(dia<=31) &&(dia!=0) && (ano!=0) && (((ano%100!=0)&&(ano%4==0))||((ano%100==0)&&(ano%400==0)))){
            printf("valida");
    }
    else if((mes==2) && (dia<=28) &&(dia!=0) && (ano!=0) && (ano%4 != 0)){
            printf("valida");
    }
    else if(((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia<=30) &&(dia!=0) && (ano!=0) && (ano%4 != 0)){
            printf("valida");
    }
    else if(((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))&&(dia<=31) &&(dia!=0) && (ano!=0) && (ano%4 != 0)){
            printf("valida");
    }
    else{
        printf("invalida");
    }
	return 0;
}