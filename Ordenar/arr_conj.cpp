#include "arr_conj.h"
#include "arreglos_ent.h"

int* union_arrs(int* a,int n,int*b,int m){
    int s = n+m;
    int* c = new int[s];
    c[0] = s;
    for(int i=0;i<m;i++){
        c[i] = a[i];
    }
    for(int i=m;i<s;i++){
        c[i] = b[i-m];
    }
    return c;
}
