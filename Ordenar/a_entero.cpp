#include "a_entero.h"

int maximo (int* X, int n){
    if(n==1){
        return X[0];
    }else{
        return maximo(maximo(X,n-1),X[n-1]);
    }
}
int maximo (int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int promedio(int* A, int n){
    int resultado;

}
