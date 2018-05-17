#include "arr_conj.h"
#include "arreglos_ent.h"

int* union_arrs(int* a,int n,int*b,int m){
    int c=repetidos(a,n);
    int d=repetidos(b,m);
    int* x=crear_arreglo_int(c);
    x=elm_repetidos(a,n);
    int* y=crear_arreglo_int(m-d);
    y=elm_repetidos(b,m);
    int* f=crear_arreglo_int(c+d);
    for(int i=0;i<c;i++){
        f[i] = x[i];
    }
    for(int i=c+1;i<(c+d);i++){
        f[i] = y[i];
    }
    return x;
}
