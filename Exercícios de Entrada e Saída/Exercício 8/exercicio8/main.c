#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Digite o valor do salario do empregado: ");
    scanf("%f",&salario);
    printf("O novo salario do empregado eh: %f\n",salario*1.25);
    system("pause");
    return 0;
}
