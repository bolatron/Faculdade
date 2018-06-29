#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (int argc, char **argv) {
    FILE *entrada, *saida;
    entrada = fopen (argv[1], "r");
    saida = fopen (argv[2], "w");
    char c, **BaseX;
    char n_orig[58]= "";
    int i, j, TAM_BaseX = 0;
    BaseX = (char **) malloc (100 * sizeof(char *));
    for(i=0; i<100; i++)
        BaseX[i] = (char *) malloc (10 * sizeof(char));
    i = 0;
    while((c = fgetc(entrada)) != EOF){
        if(c == '\n'){
            BaseX[TAM_BaseX][i] = '\0';
            BaseX[TAM_BaseX] = (char *) realloc (BaseX[TAM_BaseX], (i+1) * sizeof(char));
            TAM_BaseX++;
            i = 0;
            continue;
        }
        BaseX[TAM_BaseX][i++] = c;
    }
    TAM_BaseX++;
        for(i=99; TAM_BaseX < i; i--){
        free(BaseX[i]);
    }
    BaseX = (char**) realloc (BaseX, TAM_BaseX * sizeof(char*));

    printf("Digite a entrada da forma <NUMERO> <BASE ORIGEM> <BASE ALVO>: (Entre com \"+0 0 0\" para encerrar a entrada)\n");
    for (i=0; (strcmp(n_orig, "+0 0 0\n") != 0); i++) {
        setbuf(stdin, NULL);
        fgets(n_orig, 58, stdin);
        if (strcmp("+0 0 0\n", n_orig) == 0) break;
        trataNum(n_orig, i, TAM_BaseX, BaseX);
    }
    for (j=0; j<i; j++) {
        converteNum(saida, numeros[j], TAM_BaseX, BaseX);
    }
    printf("\n");
    free(BaseX);
    fclose(entrada);
    fclose(saida);
    return 0;
}
