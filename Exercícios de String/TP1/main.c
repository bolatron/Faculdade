#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1,num_binario,num_octal,num_decimal;
    char num_hexadecimal[28];
    printf("[1] DE DECIMAL\n");
    printf("[2] DE BINARIO\n");
    printf("[3] DE OCTAL\n");
    printf("[4] DE HEXADECIMAL\n");
    scanf("%d",&num_1);
    switch(num_1){
    case 1:
        printf("Digite o numero decimal: ");
        scanf("%d",&num_decimal);
        break;
    case 2:
        printf("Digite o numero binario: ");
        scanf("%d",&num_binario);
        break;
    case 3:
        printf("Digite o numero octal: ");
        scanf("%d",&num_octal);
        break;
    case 4:
        printf("Digite o numero hexadecimal: ");
        scanf("%s",num_hexadecimal);
        break;
    default:
        printf("COMANDO INCORRETO!\n");
        return 0;
    }
    printf("[1] PARA DECIMAL\n");
    printf("[2] PARA BINARIO\n");
    printf("[3] PARA OCTAL\n");
    printf("[4] PARA HEXADECIMAL\n");
    scanf("%d",&num_1);
    switch(num_1){
    case 1:
        printf("Resultado: %d");
        break;
    case 2:
        printf("Resultado: %d");
        break;
    case 3:
        printf("Resiltado: %d");
        break;
    case 4:
        printf("Resultado: %d");
        break;
    default:
        printf("COMANDO INCORRETO!\n");
    }
    return 0;
}
