#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saque;int nota1=0,nota2=0,nota3=0,nota4=0,nota5=0,nota6=0,nota7=0;
    printf("Digite o valor do saque: ");
    scanf("%f",&saque);
    while(saque>1){
        while(saque>=100){
            saque=saque-100;
            nota1++;
        }
        while(saque>=50){
            saque=saque-50;
            nota2++;
        }
        while(saque>=20){
            saque=saque-20;
            nota3++;
        }
        while(saque>=10){
            saque=saque-10;
            nota4++;
        }
        while(saque>=5){
            saque=saque-5;
            nota5++;
        }
        while(saque>=2){
            saque=saque-2;
            nota6++;
        }
        while(saque>=1){
            saque=saque-1;
            nota7++;
        }
    }
    printf("%d notas de 100\n%d notas de 50\n%d notas de 20\n%d notas de 10\n%d notas de 5\n%d notas de 2\n%d notas de 1\n",nota1,nota2,nota3,nota4,nota5,nota6,nota7);
    system("pause");
    return 0;
}
