#include <stdio.h>
#include <stdlib.h>

int main()
{
    float maior,menor,altura;
    do{
    printf("Digite o valor da base maior do trapezio: ");
    scanf("%f",&maior);
    printf("Digite o valor da base menor do trapezio: ");
    scanf("%f",&menor);
    printf("Digite o valor da altura: ");
    scanf("%f",&altura);
    if (maior>0 && menor>0 && altura>0){
        printf("A AREA desse trapezio eh: %f!\n",(maior+menor)*altura/2);
    }else{
        printf("Valores invalidos!\n");
    }
    }while(maior<0 && menor<0);
    system("pause");
    return 0;
}
