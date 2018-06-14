#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{
    float altura,raio;
    printf("Digite a altura do cilindro: ");
    scanf("%f",&altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f",&raio);
    printf("O volume do cilindro informado eh de: %f\n",PI*raio*raio*altura);
    system("pause");
    return 0;
}
