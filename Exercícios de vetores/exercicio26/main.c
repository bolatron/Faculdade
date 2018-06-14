#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int vetor[10];
    int n;
    double m=0,somatorio;
    for(n=0;n<10;n++){
        printf("numero %d: ",n+1);
        scanf("%d",&vetor[n]);
        m=m+vetor[n];
    }
    m=m/10;
    printf("media: %f\n",m);
    for(n=0;n<10;n++){
        somatorio=somatorio+ pow(vetor[n]-m,2);
    }
    n=10;
    printf("somatorio: %f\n",somatorio);
    printf("Desvio padrao= %f\n",sqrt(somatorio/n-1));
    system("pause");
    return 0;
}
