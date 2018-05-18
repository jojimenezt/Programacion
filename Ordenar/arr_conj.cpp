#include "arr_conj.h"
#include "arreglos_ent.h"

int* union_arrs(int* a,int n,int* b,int m){
    int* c = new int[n+m+1];
    for(int i=0;i<=n;i++){
        c[i] = a[i];
    }
    for(int i=m;i<n+1+m;i++){
        c[i-1] = b[i-m];
    }
    return c;
}

int* inter_arrs(int* a,int n,int*b,int m){
    int h =1;
    int* c = crear_arreglo_int(h);
    for(int i=0;i<m;i++){
        for(int l=0;l<n;l++){
            if(b[l]==a[i]){
                c[h++] = a[i];
            }
        }
    }
    c[0] = h;
    return c;
}

int* difer_arrs(int* a,int n, int* b,int m){
    int* r = crear_arreglo_int(n);
    for(int i=0;i<n;i++){
        r[i] = a[i];
    }
    for(int i=0;i<n;i++){
        for(int l=0;l<m;l++){
            if(a[i]==b[l]){
                r[i] = 0;
            }
        }
    }
    int temp =1;
    int* f = crear_arreglo_int(temp);
    for(int i=0;i<n;i++){
        if(r[i]!=0){
            f[temp++] = r[i];
        }
    }
    f[0] = temp;
    return f;
}

int* difer_sim_arrs(int* a,int n,int*b,int m){
    int* t=difer_arrs(a,n,b,m);
    int* u=difer_arrs(b,m,a,n);
    int a1=t[0];
    int b1=u[0];
    int temp=a1+b1-1;
    int* e=crear_arreglo_int(temp);
    e[0]=temp;
    for(int i=1;i<a1;i++){
        e[i]=t[i];
    }
    int t1=1;
    for(int i=a1;i<temp;i++){
        e[i]=u[t1++];
    }
    return e;
}

bool* pert_arrs(int* a,int n,int* b,int m,int x){
    bool* r = new bool[2];
    r[0] = false;
    r[1] = false;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            r[0] = true;
        }
    }for(int j=0;j<m;j++){
        if(b[j]==x){
            r[j] = true;
        }
    }
    return r;
}

bool cont_arrs(int* a,int n,int* b,int m){
    bool* r = new bool[n];
    for(int i=0;i<n;i++){
        r[i] = false;
    }
    for(int h=0;h<n;h++){
        for(int j=0;j<m;j++){
            if(a[h]==b[j]){
                r[h] = true;
            }
        }
    }
    int temp=0;
    for(int s=0;s<n;s++){
        if(r[s]==true){
            temp++;
        }
    }
    return temp==n;
}
