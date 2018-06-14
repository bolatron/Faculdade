#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float real;
    printf("Digite um numero real: ");
    scanf("%f",&real);
    printf("O valor do quadrado desse numero eh: %f\n",pow(real,2));
    system("pause");
    return 0;
}
