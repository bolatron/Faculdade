#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt1=1.50,alt2=1.10;int anos;
    printf("----------------------\n");
    printf("      EXERCICIO 2     \n");
    printf("----------------------\n");
    for(anos=1;alt1>=alt2;anos++){
        alt1=alt1+0.02;
        alt2=alt2+0.03;
    }
    printf("%d anos para Ze ser maior que Chico!\n",anos);
    return 0;
    system("pause");
}
