#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][20];
    char str[10][5];
    char vetor[10][2];
    int i,j;
    int resultado[5]={0,0,0,0,0};
    printf("GABARITO DA PROVA(a,b,c,d): \n");
    for(i=0;i<10;i++){
        printf("QUESTAO %d: ",i+1);
        scanf("%s",&vetor[i][2]);
    }
    for(i=0;i<5;i++){
        printf("Nome do aluno: ");
        scanf("%s",&str[i]);
        printf("NOTAS DO %s:\n",str[i]);
        for(j=0;j<10;j++){
            printf("QUESTAO %d: ",j+1);
            scanf("%s",&matriz[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            if(vetor[i][2]==matriz[i][j*2])
                resultado[i]++;
        }
    }
    printf("NOTA DOS ALUNOS:\n");
    for(i=0;i<5;i++)
        printf("%s: %d/10\n",str[i],resultado[i]);
    system ("pause");
    return 0;
}
