#include "numericos.h

int potencia(int base, int potencia){
    if(potencia==0){
        return 1;
    }else{
        return potencia(base,potencia-1)*base;
    }
}
