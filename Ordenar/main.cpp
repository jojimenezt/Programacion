#include <iostream>
#include "negocio.h"
#include "granja.h"
#include "numericos.h"
#include "geometricos.h"
#include "otros.h"
#include "arreglos_ent.h"
#include "arr_conj.h"

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
    char** X= opciones(5);
    X[0]= "Litros de leche";
    X[1]= "Cantidad de huevos producidos";
    X[2]= "Cantidad de kilos de escorpiones que se pueden vender";
    X[3]= "Corral mas economico";
    int k;
    do{
    k = menu(X,4);
    switch(k){
        case 1:
            int vacas;
            double ancho,largo,M,x;
            cout<<"Ingrese el numero de vacas que hay en la granja"<<endl;
            cin>>vacas;
            cout<<"Ingrese el ancho del corral"<<endl;
            cin>>ancho;
            cout<<"Ingrese el largo del corral"<<endl;
            cin>>largo;
            cout<<"Ingrese cuantos litros de leche se producen por M cuadrado"<<endl;
            cin>>x;
            cout<<"Ingrese cuantos metros cuadrados se necesitan para producir "<<x<<"litros de leche"<<endl;
            cin>>M;
            cout<<"Se producen en la granja "<<litros_leche(vacas,ancho,largo,M,x)<<"litros de leche"<<endl;
        break;
        case 2:
            int gallinas;
            cout<<"Ingrese cuantas aves hay en el galpon"<<endl;
            cin>>gallinas;
            cout<<"En un mes se producen "<<cant_huevos(gallinas)<<" huevos"<<endl;
        break;
        case 3:
            int peq,med,gra;
            cout<<"Ingrese cuantos escorpiones pequenos hay en las vitrinas"<<endl;
            cin>>peq;
            cout<<"Ingrese cuantos escorpiones medianos hay en las vitrinas"<<endl;
            cin>>med;
            cout<<"Ingrese cuantos escorpiones grandes hay en las vitrinas"<<endl;
            cin>>gra;
            cout<<"Se pueden vender "<<kil_esc(peq,med,gra)<<" kilos sin que decrezca la poblacion a menos de 2/3"<<endl;
        break;
        case 4:
            double ancho1,largo1;
            int p,q,s;
            cout<<"Ingrese el ancho del corral a reparar"<<endl;
            cin>>ancho1;
            cout<<"Ingrese el largo del corral a reparar"<<endl;
            cin>>largo1;
            cout<<"Ingrese el precio del alambre de puas por metro"<<endl;
            cin>>p;
            cout<<"Ingrese el precio de las tablas de madera por metro"<<endl;
            cin>>q;
            cout<<"Ingrese el precio de las varillas de metal por metro"<<endl;
            cin>>s;
            cout<<"El material mas economico para hacer el corral es el "<<cer_eco(ancho1,largo1,p,q,s)<<endl;
        break;
        }
    }
    while(k!=0);
}

void numericos(){
    char** X= opciones(9);
    X[0]= "Potencia";
    X[1]= "Es divisible a por b";
    X[2]= "Es x primo";
    X[3]= "Es x primo relativo con y";
    X[4]= "Es m el multiplo de la suma de x con y";
    X[5]= "Evaluacion polinomio en un punto dado";
    X[6]= "Calculo del coeficiente lineal de la derivada";
    X[7]= "Calculo de la derivada en un punto dado";
    X[8]= "Es x un numero fibonacci";
    int k;
    do{
    k = menu(X,9);
    switch(k){
        case 1:
            int base, exponente;
            cout<<"Ingrese la base de la potencia"<<endl;
            cin>>base;
            cout<<"Ingrese el exponente de la potencia"<<endl;
            cin>>exponente;
            cout<<"El resultado es"<<potencia(base, exponente)<<endl;
        break;
        case 2:
            int num1, num2;
            cout<<"Ingrese el primer numero"<<endl;
            cin>>num1;
            cout<<"Ingrese el segundo numero"<<endl;
            cin>>num2;
            if(es_divisible(num1, num2)){
                cout<<num1<<" es divisible por "<<num2<<endl;
            }else{
                cout<<num1<<" no es divisible por "<<num2<<endl;
            }
        break;
        case 3:
            int num;
            cout<<"Ingrese el numero que quiere averiguar si es primo"<<endl;
            cin>>num;
            if(es_primo(num,2)){
                cout<<num<<" es primo"<<endl;
            }else{
                cout<<num<<" no es primo"<<endl;
            }
        break;
        case 4:
            int x, y;
            cout<<"Ingrese el primer numero"<<endl;
            cin>>x;
            cout<<"Ingrese el segundo numero"<<endl;
            cin>>y;
            if(es_primo_relativo(x,y)){
                cout<<x<<" es primo relativo de "<<y<<endl;
            }else{
                cout<<x<<" no es primo relativo de "<<y<<endl;
            }
        break;
        case 5:
            int x1, x2, mul;
            cout<<"Ingrese el primer numero de la suma"<<endl;
            cin>>x1;
            cout<<"Ingrese el segundo numero de la suma"<<endl;
            cin>>x2;
            cout<<"Ingrese el numero el cual quiere averiguar si es multiplo de la suma de los dos numeros anteriormente ingresados"<<endl;
            cin>>mul;
            if(es_multiplo_suma(x1, x2, mul)){
                cout<<mul<<" es multiplo de la suma entre "<<x1<<" y "<<x2<<endl;
            }else{
                cout<<mul<<" no es multiplo de la suma entre "<<x1<<" y "<<x2<<endl;
            }
        break;
        case 6:
            double coef1, coef2,coef3,r;
            cout<<"Ingrese el primer coeficiente de la funcion cuadratica"<<endl;
            cin>>coef1;
            cout<<"Ingrese el segundo coeficiente de la funcion cuadratica"<<endl;
            cin>>coef2;
            cout<<"Ingrese el tercer coeficiente de la funcion cuadratica"<<endl;
            cin>>coef3;
            cout<<"Ingrese el valor en x que se encuentra en el dominio de la funcion cuadratica"<<endl;
            cin>>r;
            cout<<"El punto final es ("<<r<<","<<eval_pol_punto(coef1,coef2,coef3,r)<<")"<<endl;
        break;
        case 7:
            double coef12, coef22,coef32;
            cout<<"Ingrese el primer coeficiente de la funcion cuadratica"<<endl;
            cin>>coef12;
            cout<<"Ingrese el segundo coeficiente de la funcion cuadratica"<<endl;
            cin>>coef22;
            cout<<"Ingrese el tercer coeficiente de la funcion cuadratica"<<endl;
            cin>>coef32;
            cout<<"El coeficiente lineal de la derivada es "<<eval_coef_lineal_der(coef12,coef22,coef32)<<endl;
        break;
        case 8:
            double coef13, coef23,coef33,r1;
            cout<<"Ingrese el primer coeficiente de la funcion cuadratica"<<endl;
            cin>>coef13;
            cout<<"Ingrese el segundo coeficiente de la funcion cuadratica"<<endl;
            cin>>coef23;
            cout<<"Ingrese el tercer coeficiente de la funcion cuadratica"<<endl;
            cin>>coef33;
            cout<<"Ingrese el valor en x que se encuentra en el dominio de la funcion cuadratica"<<endl;
            cin>>r1;
            cout<<eval_der_punto(coef13, coef23, coef33,r1)<<endl;
        break;
        case 9:
            int a;
            cout<<"Ingrese el numero que quiere determinar si pertenece a la sucesion de fibonacci"<<endl;
            cin>>a;
            if(es_fib(a)){
                cout<<a<<" si pertenece a la sucesion de fibonacci"<<endl;
            }else{
                cout<<a<<" no pertenece a la sucesion de fibonacci"<<endl;
            }
        break;
        }
    }
    while(k!=0);
}

void geometricos(){
    char** X= opciones(5);
    X[0]= "Propiedades de dos rectas, si son paralelas, perpendiculares o de ningun tipo";
    X[1]= "Punto de interseccion entre dos rectas";
    X[2]= "Area del triangulo que circunscribe un circulo";
    X[3]= "Area y perimetro de cuadrado, pentagono, hexagonos inscritos en un circulo o circunscritos";
    X[4]= "Cantidad de telarana";
    int k;
    do{
    k = menu(X,5);
    switch(k){
        case 1:
            double m1,x1,m2,x2;
            cout<<"Ingrese la pendiente de la primera recta"<<endl;
            cin>>m1;
            cout<<"Ingrese el punto de corte con x de la primera recta"<<endl;
            cin>>x1;
            cout<<"Ingrese la pendiente de la segunda recta"<<endl;
            cin>>m2;
            cout<<"Ingrese el punto de corte con x de la segundarecta"<<endl;
            cin>>x2;
            if(son_par_per(m1,x1,m2,x2)=="paralelas"){
                cout<<"Las rectas son paralelas"<<endl;
            }else if(son_par_per(m1,x1,m2,x2)=="perpendiculares"){
                cout<<"Las rectas son perpendiculares"<<endl;
            }else{
                cout<<"Las rectas no son de ningun tipo"<<endl;
            }

        break;
        case 2:
            double m12,x12,m22,x22;
            cout<<"Ingrese la pendiente de la primera recta"<<endl;
            cin>>m12;
            cout<<"Ingrese el punto de corte con x de la primera recta"<<endl;
            cin>>x12;
            cout<<"Ingrese la pendiente de la segunda recta"<<endl;
            cin>>m22;
            cout<<"Ingrese el punto de corte con x de la segundarecta"<<endl;
            cin>>x22;
            cout<<"El punto de interseccion entre las dos rectas es ("<<interseccion_x(m12,x12,m22,x22)<<","<<interseccion_y(m12,x12,m22,x22)<<")"<<endl;
        break;
        case 3:
            double r;
            cout<<"Ingrese el radio del circulo que esta circunscrito dentro de un triangulo"<<endl;
            cin>>r;
            cout<<"El area del triangulo es "<<area_tri_circuns(r)<<" unidades cuadradas"<<endl;
        break;
        case 4:
            double r2;
            cout<<"Ingrese el radio del circulo que esta inscribiendo o circunscribiendo a un cuadrado, pentagono, y un hexagono"<<endl;
            cin>>r2;
            cout<<"El area y perimetro de un cuadrado inscrito son "<<area_cuad_ins(r2)<<" unidades cuadrades y "<<peri_cuad_ins(r2)<<" unidades"<<endl;
            cout<<"El area y perimetro de un cuadrado circunscrito son "<<area_cuad_cir(r2)<<" unidades cuadrades y "<<peri_cuad_cir(r2)<<" unidades"<<endl;
            cout<<"El area y perimetro de un pentagono inscrito son "<<area_penta_ins(r2)<<" unidades cuadrades y "<<peri_penta_ins(r2)<<" unidades"<<endl;
            cout<<"El area y perimetro de un pentagono circunscrito son "<<area_penta_cir(r2)<<" unidades cuadrades y "<<peri_penta_cir(r2)<<" unidades"<<endl;
            cout<<"El area y perimetro de un hexagono inscrito son "<<area_hexa_ins(r2)<<" unidades cuadrades y "<<peri_hexa_ins(r2)<<" unidades"<<endl;
            cout<<"El area y perimetro de un hexagono circunscrito son "<<area_hexa_cir(r2)<<" unidades cuadrades y "<<peri_hexa_cir(r2)<<" unidades"<<endl;
        break;
        case 5:
            double r3;
            cout<<"Ingrese la medida de la telarana que quiere hacer la arana"<<endl;
            cin>>r3;
            cout<<"Cantidad de telarana requerida: "<<telarana(r3)<<endl;

        break;
        }
    }
    while(k!=0);
}

void otros(){
 char** A= opciones(3);
    A[0] = "Poda de arboles en la UN";
    A[1] = "Calculo prestamo con interes simple e interes compuesto";
    A[2] = "Fichas de lego";
    int k;
    do{
        k = menu(A,3);
    switch(k){
        case 1:
            int p,k,t;
            cout<<"Ingrese el numero de hojas que tiene una rama"<<endl;
            cin>>p;
            cout<<"Ingrese el numero de ramas que se le quitaron a cada arbol"<<endl;
            cin>>k;
            cout<<"Ingrese cuantas hojas quiere obtener despues de haber podado"<<endl;
            cin>>t;
            cout<<"Necesita podar "<<poda_arboles(p,k,t)<<" arboles para obtener la cantidad de hojas deseada"<<endl;
        break;
        case 2:
            int k1, i;
            cout<<"Ingrese cuantos pesos le presto su amigo"<<endl;
            cin>>k1;
            cout<<"Ingrese cual fue el interes diario que le coloco su amigo"<<endl;
            cin>>i;
            cout<<"Si el interes es simple, debe pagar un total de $"<<pago_int_sim(k1,i)<<endl;
            cout<<"Si el interes es compuesto, debe pagar un total de $"<<pago_int_comp(k1,i)<<endl;
        break;
        case 3:
            int n;
            cout<<"Ingrese la base n del cuadrito"<<endl;
            cin>>n;
            cout<<"Si solo tiene las fichas rojas y azules tiene "<<fib(n)<<" formas diferentes de construir la hilera"<<endl;
            cout<<"Si tiene las fichas rojas, azules y amarillas tiene "<<tribo(n)<<" formas diferentes de construir la hilera"<<endl;
        break;
    }
    }
    while(k!=0);
}

void arreglos(){
 char** A= opciones(13);
    A[0] = "Criba de Eratostenes";
    A[1] = "Suma de los elementos de un arreglo de numeros enteros";
    A[2] = "Promedio de un arreglo de numeros enteros";
    A[3] = "Producto de dos arreglos de numeros enteros de igual tamaño";
    A[4] = "Minimo de un arreglo de enteros";
    A[5] = "Maximo de un arreglo de enteros";
    A[6] = "Producto directo de dos arreglos de enteros reales";
    A[7] = "Mediana de un arreglo de numeros enteros";
    A[8] = "Arreglo con ceros al final";
    A[9] = "Numero binario a numero decimal";
    A[10] = "Numero decimal a binario";
    A[11] = "MCD de un arreglo";
    A[12] = "MCM de un arreglo";
    int k;
    do{
        k = menu(A,13);
    switch(k){
        case 1:{
            int n_criba;
            cout<<"Ingrese el numero hasta el cual quiere calcular la criba de erastotenes"<<endl;
            cin>>n_criba;
            bool* y =arreglo_criba_erast(n_criba);
            cout<<"Los numeros primos desde 1 hasta "<<n_criba<<" son:"<<endl;
            escribir_criba_erast(y,n_criba);
            cout<<endl;
        }
        break;
        case 2:{
            int n;
            cout<<"Ingrese el tamano del arreglo que quiere evaluar"<<endl;
            cin>>n;
            int* x=crear_arreglo_int(n);
            leer_arreglo_int(x,n);
            cout<<"La suma de los elementos del arreglo es "<<suma_arr(x,n)<<endl;
        }
        break;
        case 3:{
            int n0;
            cout<<"Ingrese el tamano del arreglo que quiere evaluar"<<endl;
            cin>>n0;
            int* x=crear_arreglo_int(n0);
            leer_arreglo_int(x,n0);
            cout<<"El promedio del arreglo es "<<promedio_arr(x,n0)<<endl;
        }
        break;
        case 4:{
            int n1;
            cout<<"Ingrese el tamano del arreglo que quiere evaluar"<<endl;
            cin>>n1;
            int* x=crear_arreglo_int(n1);
            int* y=crear_arreglo_int(n1);
            cout<<"Arreglo 1"<<endl;
            leer_arreglo_int(x,n1);
            cout<<"Arreglo 2"<<endl;
            leer_arreglo_int(y,n1);
            cout<<"El producto de los dos arreglos es "<<producto_arrs(x,y,n1)<<endl;
        }
        break;
        case 5:{
            int n2;
            cout<<"Ingrese el tamano del arreglo que quiere evaluar"<<endl;
            cin>>n2;
            int* x=crear_arreglo_int(n2);
            cout<<"Arreglo 1"<<endl;
            leer_arreglo_int(x,n2);
            cout<<"El minimo del arreglo es "<<minimo_arr(x,n2)<<endl;
        }
        break;
        case 6:{
            int n3;
            cout<<"Ingrese el tamano del arreglo que quiere evaluar"<<endl;
            cin>>n3;
            int* x=crear_arreglo_int(n3);
            cout<<"Arreglo 1"<<endl;
            leer_arreglo_int(x,n3);
            cout<<"El maximo del arreglo es "<<maximo_arr(x,n3)<<endl;
        }
        break;
        case 7:{
            int n4;
            cout<<"Ingrese el tamano del arreglo que quiere evaluar"<<endl;
            cin>>n4;
            int* x=crear_arreglo_int(n4);
            int* y=crear_arreglo_int(n4);
            cout<<"Arreglo 1"<<endl;
            leer_arreglo_int(x,n4);
            cout<<"Arreglo 2"<<endl;
            leer_arreglo_int(y,n4);
            cout<<"El producto directo de los dos arreglos es "<<endl;
            escribir_arreglo_double(producto_direct_arrs(x,y,n4),n4);
            cout<<endl;
        }
        break;
        case 8:{
            int n5;
            cout<<"Ingrese el tamano del arreglo que quiere evaluar"<<endl;
            cin>>n5;
            int* x=crear_arreglo_int(n5);
            cout<<"Arreglo 1"<<endl;
            leer_arreglo_int(x,n5);
            cout<<"La mediana del arreglo es "<<mediana_arr(x,n5)<<endl;
        }
        break;
        case 9:{
            int n6;
            cout<<"Ingrese el tamano del arreglo que quiere evaluar"<<endl;
            cin>>n6;
            int* x=crear_arreglo_int(n6);
            cout<<"Arreglo 1"<<endl;
            leer_arreglo_int(x,n6);
            cout<<"La mediana del arreglo es "<<endl;
            escribir_arreglo_int(fin_ceros(x,n6),n6);
            cout<<endl;
        }
        break;
        case 10:{
            int n7;
            cout<<"Ingrese el tamano del arreglo de numeros binarios que quiere evaluar"<<endl;
            cin>>n7;
            int* x=crear_arreglo_int(n7);
            cout<<"Arreglo 1"<<endl;
            leer_arreglo_int(x,n7);
            cout<<"El arreglo convertido a decimal da como resultado el numero "<<bin2dec(x,n7)<<endl;
        }
        break;
        case 11:{
            int n8;
            cout<<"Ingrese el numero decimal para convertirlo a numero binario"<<endl;
            cin>>n8;
            int* A=new int(num_veces_div(n8,0));
            A=dec2bin(n8);
            cout<<"El numero convertido a numerio binario da como resultado el numero "<<endl;
            escribir_arreglo_int(A,num_veces_div(n8,0));
            cout<<endl;
        }
        break;
        case 12:{
            int n8;
            cout<<"Ingrese el tamano del arreglo"<<endl;
            cin>>n8;
            int* x=crear_arreglo_int(n8);
            cout<<"Arreglo 1"<<endl;
            leer_arreglo_int(x,n8);
            cout<<"El maximo comun divisor del arreglo es "<<mcd_arr(x,n8)<<endl;
        }
        break;
        case 13:{
            int n8;
            cout<<"Ingrese el tamano del arreglo"<<endl;
            cin>>n8;
            int* x=crear_arreglo_int(n8);
            cout<<"Arreglo 1"<<endl;
            leer_arreglo_int(x,n8);
            cout<<"El minimo comun multiplo del arreglo es "<<mcm_arr(x,n8)<<endl;
        }
        break;
    }
    }
    while(k!=0);
}

void arr_conj(){
 char** A= opciones(7);
    A[0] = "Union";
    A[1] = "Interseccion";
    A[2] = "Diferencia";
    A[3] = "Diferencia simetrica";
    A[4] = "Pertenece";
    A[5] = "Contenido";
    A[6] = "Representacion modificada";
    int k;
    int n,m;
    cout<<"Ingrese el tamano del primer conjunto"<<endl;
    cin>>n;
    int* a=crear_arreglo_int(n);
    leer_arreglo_int(a,n);
    cout<<"Ingrese el tamano del segundo conjunto"<<endl;
    cin>>m;
    int* b=crear_arreglo_int(m);
    leer_arreglo_int(b,m);
    do{
        k = menu(A,7);
    switch(k){
        case 1:{
            int x=repetidos(a,n),y=repetidos(b,m);
            int* c=crear_arreglo_int(x);
            c=elm_repetidos(a,n);
            int* d=crear_arreglo_int(y);
            d=elm_repetidos(b,m);
            cout<<"El arreglo resultante es"<<endl;
            escribir_arreglo_int(union_arrs(c,x,d,repetidos(b,m)),x+y);
            cout<<endl;
        }
        break;
        case 2:{
            int x=repetidos(a,n),y=repetidos(b,m);
            int* c=crear_arreglo_int(x);
            c=elm_repetidos(a,n);
            int* d=crear_arreglo_int(y);
            d=elm_repetidos(b,m);
            cout<<"El arreglo resultante es"<<endl;
            escribir_arreglo_int(inter_arrs(c,x,d,repetidos(b,m)),x+y);
            cout<<endl;
        }
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

void menu_principal(){
 char** A= opciones(6);
    A[0] = "La granja";
    A[1] = "Numericos";
    A[2] = "Geometricos";
    A[3] = "Otros";
    A[4] = "Arreglos";
    A[5] = "Arreglos como conjuntos";
    int k;
    do{
        k = menu(A,6);
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
        case 6:
            arr_conj();
        break;
    }
    }
    while(k!=0);
}

int main(){
    menu_principal();
    return 0;
}
