#include "granja.h"

double litros_leche(int V, double n, double m, double M, double x){
    return (n*m*x)/(v*M);
}

int cant_huevos(int A){
    return 8*A/3;
}

int kil_esc(int P, int M, int G){
        int pob_max=(P+M+G)/3;
        int peso=20*P+30*M+50*G;
        if (pob<=G){
            return pob_max*0.05;
        }else if (6+M>=pob_max){
            return G*0.05+(pob_max-G)*0.03;
        }else{
            return G*0.05+M*0.03+(pob_max-G-M)*0.02;
        }
}

char* cer_eco(double m, double n, int p, int q, int s){
    int pm = 2*4*q*(m+n);
    int pa = 2*5*p*(m+n);
    int pv = 2*8*s*(m+n);

    if(pm<pa && pm<pv){
        return "Madera";
    }else{
        if(pa<pv){
            return "Alambre";
        }
        else{
            return "Varilla";
        }
    }
}
