#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4];
    int maior,col,lin,i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("matriz[%d][%d]: ",j,i);
            scanf("%d",&matriz[j][i]);
        }
    }
    maior=matriz[0][0];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(matriz[j][i]>maior){
                maior=matriz[j][i];
                col=i;
                lin=j;
            }
        }
    }
    printf("Coluna: %d\nLinha: %d\n",col,lin);
    return 0;
}
