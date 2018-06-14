#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6];
    int i,pares=0,impares=0;
    for(i=0;i<6;i++){
        printf("numero %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("NUMEROS PARES DIGITADOS: ");
    for(i=0;i<6;i++){
        if(vetor[i]%2==0){
            printf("%d ",vetor[i]);
            pares=pares+vetor[i];
        }
    }
    printf("\n");
    printf("Soma dos pares digitados: %d\n",pares);
    printf("-------------------------------\n");
    printf("NUMEROS IMPARES DIGITADOS: ");
    for(i=0;i<6;i++){
        if(vetor[i]%2!=0){
            printf("%d ",vetor[i]);
            impares=impares+vetor[i];
        }
    }
    printf("\n");
    printf("Soma dos impares digitados: %d\n",impares);
    printf("-------------------------------\n");
    system("pause");
    return 0;
}
