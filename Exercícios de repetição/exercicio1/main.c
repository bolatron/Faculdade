#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,nota3,media;
    printf("Digite o valor da nota do trabalho do laboratorio(0 a 10): ");
    scanf("%f",&nota1);
    printf("Digite o valor da nota da avaliacao semestral(0 a 10): ");
    scanf("%f",&nota2);
    printf("Digite o valor da nota do exame final(0 a 10): ");
    scanf("%f",&nota3);
    media= (nota1*2+nota2*3+nota3*5)/(2+3+5);
    if (media<=2.9)
        printf("O aluno esta reprovado!\n");
    if (media>2.9 && media<=4.9)
        printf("O aluno esta de recuperacao!\n");
    if (media>4.9)
        printf("O aluno foi aprovado!\n");
    system("pause");
    return 0;
}
