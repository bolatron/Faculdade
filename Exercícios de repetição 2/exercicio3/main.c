#include <stdio.h>
#include <stdlib.h>

int main()
{
    float aumento=15;int anos;double salario=2000;
    printf("----------------------\n");
    printf("      EXERCICIO 3     \n");
    printf("----------------------\n");
    for(anos=1996;anos<=2018;anos++){
        salario=salario+salario*(aumento/1000);
        aumento=aumento*2;
    }
    printf("O salario atual do funcionario eh %.1f!\n",salario);
    system("pause");
    return 0;
}
