#include <iostream>
#include "negocio.h"8
using namespace std;

int menu(char** X, int n){
    int opc;
    do{
        for(int i = 0; i< n;i++){
            cout<<(i+1)<<". "<<X[i]<<endl;
        }
        cout<<"0. Salir"<<endl;
        cout<<"Ingrese opcion: ";
        cin>>opc;
        if(opc<0 || opc>n){
            cout<<"Para que te traje"<<endl;
        }
    }
    while(opc<0 || opc> n);
    return opc;
}

char** opciones(int n){
    char** X= new char*[n];
    return X;

}

void negocio(){
    double p;
    int n;
    int x;
    int y;
    cout<<"Ingrese precio: ";
    cin>>p;
    cout<<"Ingrese cantidad de productos: ";
    cin>>n;
    cout<<"Cantidad para 10%: ";
    cin>>x;
    cout<<"Cantidad para 20%: ";
    cin>>y;
    cout<<costo(p,n,x,y)<<endl;
}

void granja(){
    char** X= opciones(3);
    X[0]= "Carne china";
    X[1]= "Leche";
    X[2]="Negocio";
    int k;
    do{
    k = menu(X,3);
    switch(k){
        case 1:
            int V;
            double n,m,M,x;
            cout<<"Carne china"<<endl;
            cout<<litros_leche(V,n,m,M,x)<<endl;
        break;
        case 2:
            int A;
            cant_huevos(A);
        break;
        case 3:
            int P,M,G;
            kil_esc(P,M,G);
        break;
        case 4:
            double m,n;
            int p,q,s;
            cer_eco(m,n,p,q,s)
        break;
        }
    }
    while(k!=0);
}

void numericos(){
    char** X= opciones(9);
    X[0]= "Potencia";
    X[1]= "Leche";
    X[2]= "Negocio";
    int k;
    do{
    k = menu(X,3);
    switch(k){
        case 1:

        break;
        case 2:

        break;
        case 3:

        break;
        case 4:

        break;
        }
    }
    while(k!=0);
}

void menu_principal(){
 char** A= opciones(4);
    A[0] = "La granja";
    A[1] = "Numericos";
    A[2] = "Geometricos";
    A[3] = "Otros";
    int k;
    do{
        k = menu(A,4);
    switch(k){
        case 1:
           granja();
        break;
        case 2:
            numericos();
        break;
        case 3:
            geometricos();
        break;
        case 4:
            otros();
        break;
        case 5:
            arreglos();
        break;


    }
    }
    while(k!=0);
}

int main()
{
   menu_principal();

    return 0;
}
