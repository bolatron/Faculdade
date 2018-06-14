#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K;
    printf("Digite uma velocidade em Km/h: ");
    scanf("%f",&K);
    printf("A velocidade convertida em m/s eh: %f\n",K/3.6);
    system("pause");
    return 0;
}
