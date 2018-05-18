#ifndef ARR_CONJ_H_INCLUDED
#define ARR_CONJ_H_INCLUDED

int* union_arrs(int* a,int n,int*b,int m);

int* inter_arrs(int* a,int n,int*b,int m);

int* difer_arrs(int* a,int n,int*b,int m);

int* difer_sim_arrs(int* a,int n,int*b,int m);

bool* pert_arrs(int* a,int n,int* b,int m,int x);

bool cont_arrs(int* a,int n,int* b,int m);
#endif // ARR_CONJ_H_INCLUDED
