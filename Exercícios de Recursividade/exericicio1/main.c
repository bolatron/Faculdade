#include <stdio.h>
#include <string.h>
int verifica(char N[], char k, int i){
    int TAM_STR = strlen(N);
    if(i<TAM_STR){
        if(N[i] == k)
            return verifica(N, k, i+1) + 1;
        else
            return verifica(N, k, i+1);
    }else{
        return 0;
    }
}

int main(){
    char N[58];
    char k;
    int i = 0;
    printf("NUMERO QUALQUER: \n");
    fgets(N, 58, stdin);
    printf("DIGITO A SER VERIFICADO: ");
    scanf("%c",&k);
    printf("O DIGITO %c OCORRE %d VEZES EM %s\n",k ,verifica(N, k, i), N);
    return 0;
}
