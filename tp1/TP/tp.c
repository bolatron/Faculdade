#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main () {
    char n_orig[58]= "";
    int i, j;
    printf("Digite a entrada da forma <NUMERO> <BASE ORIGEM> <BASE ALVO>: (Entre com \"+0 0 0\" para encerrar a entrada)\n");
    for (i=0; (strcmp(n_orig, "+0 0 0\n") != 0); i++) {
        setbuf(stdin, NULL);
        fgets(n_orig, 58, stdin);
        if (strcmp("+0 0 0\n", n_orig) == 0) break;
        trataNum(n_orig, i);
    }
    for (j=0; j<i; j++) {
        converteNum(numeros[j]);
    }
    printf("\n");
    return 0;
}
