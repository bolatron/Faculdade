#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grau, lin, col, count = 1;
    int vet_pascal[100][100];
    printf("Digite: ");
    scanf("%d",&grau);
    vet_pascal[0][0]=1;
    for(lin = 1 ; lin <= grau ; lin++){
        printf("Grau %d: ",count);
        count++;
        for(col = 1 ; col <= lin ; col++){
            vet_pascal[lin][col] = vet_pascal[lin-1][col] + vet_pascal[lin-1][col-1];
            printf("%d ",vet_pascal[lin][col]);
        }
    printf("\n");
    }
    system("PAUSE");
    return 0;
}
