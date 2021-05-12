#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float A, B, D, E, pagamento, valor_credito, valor_debito;
    int C;
    scanf("%f %f %d %f %f", &A, &B, &C, &D, &E);
    pagamento = (A+B);
    valor_credito=(D*E*95/100);
    valor_debito=(D*E*85/100);
    switch(C){
    case 0:
        if((valor_credito<=pagamento)&&(pagamento>0)&&(E>0)&&(D>0)){
             printf("Faz um Ifood!");
        }
        else if(D>0){
            printf("pede menos que as esfihas nao vao acabar hoje!");
        }
        break;
    case 1:
        if((valor_debito<=pagamento)&&(pagamento>0)&&(E>0)&&(D>0)){
             printf("Faz um Ifood!");
        }
        else if(D>0){
            printf("pede menos que as esfihas nao vao acabar hoje!");
        }
        break;
    }
    return 0;
}