#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, n2;
    char c;
    scanf("%d %c", &n, &c);
    n2=(int)(c);
    if((n>=0)&&(n<=99)&&(((n2>=0)&&(n2<=47))||((n2>=58)&&(n2<=64))||((n2>=91)&&(n2<=96))||((n2>=123)&&(n2<=255)))){
        printf("Caminh�o 1");
    }
    else if(n%2==0){
      switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Caminh�o 2");

   }
    }
    else if((n%2!=0)&&(n2>=65)&&(n2<=90)){
        printf("Caminh�o 3");
    }
    else{
        printf("Caminh�o 4");
    }
    return 0;
}