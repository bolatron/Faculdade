#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5],y[5],i,j;
    for(i=0;i<5;i++){
        printf("Valor X %d: ",i+1);
        scanf("%d",&x[i]);                  //FAZER UM COMANDO PARA NAO REPETIR OS NUMEROS!
        printf("Valor Y %d: ",i+1);
        scanf("%d",&y[i]);
    }
    printf("SOMA DOS VETORES: \n");
    for(i=0;i<5;i++)
        printf("posicao %d: %d\n",i+1,x[i]+y[i]);
    printf("PRODUTO DOS VETORES: \n");
    for(i=0;i<5;i++)
        printf("posicao %d: %d\n",i+1,x[i]*y[i]);
    printf("DIFERENCA DOS VETORES: \n");
    for(i=0;i<5;i++)
        printf("posicao %d: %d\n",i+1,x[i]-y[i]);
    printf("INTERSECAO DOS VETORES: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(x[i]==y[j])
                printf("%d ",x[i]);
        }
    }
    printf("\n");
    printf("UNIAO DOS VETORES: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(x[i]==y[j])
                printf("%d ",y[j]);
        }
    }
    printf("\n");            // TERMINAR A UNIAO DOS VETORES!
    system("pause");
    return 0;
}
