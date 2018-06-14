#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int i,maior=0,menor;
    for(i=0;i<10;i++){
        scanf("%d",&vetor[i]);
    }
    menor=vetor[0];
    for(i=0;i<10;i++){
        if(vetor[i]<menor)
            menor=vetor[i];
        if(vetor[i]>maior)
            maior=vetor[i];
    }
    printf("O maior eh: %d\nO menor eh: %d\n",maior,menor);
    system("pause");
    return 0;
}
