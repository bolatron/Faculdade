#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][4];
    int i,maior,maiori;
    for(i=0;i<5;i++){
        printf("Digite o numero da matricula: ");
        scanf("%d",&matriz[i][0]);
        printf("Digite o numero da media das provas: ");
        scanf("%d",&matriz[i][1]);
        printf("Digite o numero da media dos trabalhos: ");
        scanf("%d",&matriz[i][2]);
        matriz[i][3]=(int)(matriz[i][1]+matriz[i][2])/2;
    }
    maior=matriz[0][3];
    for(i=0;i<5;i++){
        if(matriz[i][3]>maior){
            maior=matriz[i][3];
            maiori=i;
        }
    }
    printf("O aluno com a maior nota foi: %d\n",matriz[maiori][0]);
    printf("A media aritmetica das notas finais foi: %d\n",(matriz[0][3]+matriz[1][3]+matriz[2][3]+matriz[3][3]+matriz[4][3])/5);
    system ("pause");
    return 0;
}
