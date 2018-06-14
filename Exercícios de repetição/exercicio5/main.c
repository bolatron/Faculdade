#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;float n1,n2;
    printf("DIGITE 1 PARA SOMAR(+)\n");
    printf("DIGITE 2 PARA SUBTRAIR(-)\n");
    printf("DIGITE 3 PARA MULTIPLICAR(*)\n");
    printf("DIGITE 4 PARA DIVIDIR(/)\n");
    scanf("%d",&valor);
    switch (valor){
        case 1:
            printf("Digite os valores: ");
            scanf("%f %f",&n1,&n2);
            printf("A soma dos valores eh: %.2f\n",n1+n2);
            break;
        case 2:
            printf("Digite os valores: ");
            scanf("%f %f",&n1,&n2);
            printf("A subtracao dos valores eh: %.2f\n",n1-n2);
            break;
        case 3:
            printf("Digite os valores: ");
            scanf("%f %f",&n1,&n2);
            printf("A multiplicacao dos valores eh: %.2f\n",n1*n2);
            break;
        case 4:
            printf("Digite os valores: ");
            scanf("%f %f",&n1,&n2);
            printf("A divisao dos valores eh: %.2f\n",n1/n2);
            break;
        default:
            printf("Caractere nao detectado!\n");
    }
    system("pause");
    return 0;
}
