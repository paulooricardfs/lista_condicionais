#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int A, B, C;
    char X, Y;
    scanf("%d %c %d %c %d", &A, &X, &B, &Y, &C);
    switch(A){
    case 0:
        if(X=='^'){
            switch(B){
            case 0:
                if(Y=='^'){
                    switch(C){
                    case 0:
                        printf("0");
                        break;
                    case 1:
                        printf("0");
                        break;
                    }
                }
                if(Y=='v'){
                    switch(C){
                    case 0:
                        printf("0");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                break;
            case 1:
                if(Y=='^'){
                    switch(C){
                    case 0:
                        printf("0");
                        break;
                    case 1:
                        printf("0");
                        break;
                    }
                }
                if(Y=='v'){
                    switch(C){
                    case 0:
                        printf("0");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                break;
            }
        }
        if(X=='v'){
            switch(B){
            case 0:
                if(Y=='^'){
                    switch(C){
                    case 0:
                        printf("0");
                        break;
                    case 1:
                        printf("0");
                        break;
                    }
                }
                if(Y=='v'){
                    switch(C){
                    case 0:
                        printf("0");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                break;
            case 1:
                if(Y=='^'){
                    switch(C){
                    case 0:
                        printf("0");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                if(Y=='v'){
                    switch(C){
                    case 0:
                        printf("1");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                break;
            }
        }
        break;
    case 1:
        if(X=='^'){
            switch(B){
            case 0:
                if(Y=='^'){
                    switch(C){
                    case 0:
                        printf("0");
                        break;
                    case 1:
                        printf("0");
                        break;
                    }
                }
                if(Y=='v'){
                    switch(C){
                    case 0:
                        printf("0");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                break;
            case 1:
                if(Y=='^'){
                    switch(C){
                    case 0:
                        printf("0");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                if(Y=='v'){
                    switch(C){
                    case 0:
                        printf("1");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                break;
            }
        }
        if(X=='v'){
            switch(B){
            case 0:
                if(Y=='^'){
                    switch(C){
                    case 0:
                        printf("1");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                if(Y=='v'){
                    switch(C){
                    case 0:
                        printf("1");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                break;
            case 1:
                if(Y=='^'){
                    switch(C){
                    case 0:
                        printf("1");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                if(Y=='v'){
                    switch(C){
                    case 0:
                        printf("1");
                        break;
                    case 1:
                        printf("1");
                        break;
                    }
                }
                break;
            }
        }

        break;
    }

    return 0;
}
