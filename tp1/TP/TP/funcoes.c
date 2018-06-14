#include "funcoes.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

void trataNum (char str[], int a) {
    int i, j, bases[2];
    double soma=0;
    for (i=1; str[i]!=' '; i++);
    int aux=i;
    for (j=0; j<2; j++) {
        i++;
        if (str[i] == '1') {
            bases[j]=str[i+1] - '0' + 10;
        } else {
            bases[j]=str[i] - '0';
        }
        for (; str[i]!=' '; i++);
    }
    for (j=aux; str[j]!='.'; j--);
    for (i=j-1; i>=1; i--) {
        if (str[i] > '9') {
            soma+=(str[i]-'0'-7)*pow(bases[0],j-1-i);
        } else {
            soma+=(str[i]-'0')*pow(bases[0],j-1-i);
        }
    }
    for (i=j+1; i<aux; i++) {
        if (str[i] > '9') {
            soma+=(str[i]-'0'-7)*pow(bases[0],j-i);
        } else {
            soma+=(str[i]-'0')*pow(bases[0], j-i);
        }
    }
    if (str[0] == '-') {
        soma*=-1;
    }
    numeros[a][0]=soma;
    numeros[a][1]=bases[1];
}

void converteNum (double v[]) {
    int i, T;
    char str[192];
    if (v[0]<0) {
        printf("-");
        v[0]*=-1;
    } else {
        printf("+");
    }
    int parte_inteira=floor(v[0]);
    float parte_decimal=v[0]-parte_inteira;
    for (i=0; parte_inteira>=v[1]; i++, parte_inteira/=(int)v[1]) {
        str[i]=(parte_inteira%((int)v[1]))+'0';
        if (str[i] > '9') {
            str[i]+=7;
        }
    }
    str[i]=parte_inteira+'0';
    if (str[i] > '9') {
        str[i]+=7;
    }
    for (; i>=0; i--) {
        printf("%c", str[i]);
    }
    printf(".");
    for (i=-1; parte_decimal != 0.0; i--) {
        T=parte_decimal*(int)v[1];
        if (T>9) {
            printf("%c", T+'0'+7);
        } else {
            printf("%d", T);
        }
        parte_decimal = (parte_decimal*(int)v[1]) - T;
    }
    printf("\n");
}
