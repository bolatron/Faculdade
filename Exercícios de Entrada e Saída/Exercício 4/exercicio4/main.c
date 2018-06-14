#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,F;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f",&C);
    F = (C*(9.0/5.0)+32.0);
    printf("A temperatura em Fahrenheit eh: %f\n",F);
    system("pause");
    return 0;
}
