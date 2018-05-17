/*#include "mat_bin.h"
using namespace std;

int** union_rel(int** r,int** s,int n,int m){
    int** T=crear_matriz(n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            T[i][j]=r[i][j]|| s[i][j];
        }
    }
    return T;
}

int** interseccion_rel(int** r,int** s,int n,int m){
    int** T=crear_matriz(n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            T[i][j]=r[i][j]&& s[i][j];
        }
    }
    return T;
}
*/
