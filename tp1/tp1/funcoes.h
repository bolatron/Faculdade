#ifndef funcoes_h
#define funcoes_h
#include <stdio.h>
#include <stdlib.h>
double numeros[100][2];
int Procura_Num(int TAM_BaseX, char **BaseX, char c);
void trataNum (char str[], int a, int TAM_BaseX, char **BaseX);
void converteNum (FILE *saida, double v[], int TAM_BaseX, char **BaseX);
#endif
