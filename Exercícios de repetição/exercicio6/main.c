#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    if (n1%5==0 && n1%3==0){
        system("pause");
        return 0;
    }else{
        if (n1%5==0){
            printf("O numero eh divisivel por 5!\n");
        }
        if (n1%3==0){
            printf("O numero eh divisivel por 3!\n");
        }
        if (n1%5!=0 && n1%3!=0){
            printf("O numero nao eh divisivel nem por 5 nem por 3!\n");
        }
    }
    system("pause");
    return 0;
}
