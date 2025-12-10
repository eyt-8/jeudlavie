#ifndef __FONCTIONS_H__
#define __FONCTIONS_H__

void afficher(int** matrice, int n, int N);
int** allouerMatrice(int n, int N);
void initialiserMatrice(int** matrice, int n, int N);
int** reloadMatrice1(int** matrice, int n, int N);
int** reloadMatrice2(int** matrice, int n, int N);
int nombreVoisins(int** matrice, int n, int N, int i, int j);

#endif