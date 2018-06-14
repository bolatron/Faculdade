#include <stdio.h>

typedef struct{
   int matricula;
   float notas[3];
}Aluno;
void LeAluno(Aluno Turma[5]){
    int i,j;
    for(i=0;i<5;i++){
    printf("Digite o numero do aluno: ");
    scanf("%d",&Turma[i].matricula);
        for(j=0;j<3;j++){
            printf("Digite a nota %d: ",j+1);
            scanf("%f",&Turma[i].notas[j]);
        }
    }
}
void ImprimeTurma(Aluno Turma[5]){
    int i,j;
    for(i=0;i<5;i++){
        printf("Numero da matricula: %d\n",Turma[i].matricula);
        for(j=0;j<3;j++){
            printf("Nota %d: %f\n",j+1,Turma[i].notas[j]);
        }
    }
}
float CalculaMediaAluno(Aluno Turma[5],int i){
    return (Turma[i].notas[0]+Turma[i].notas[1]+Turma[i].notas[2])/3;
}
int main()
{
    Aluno Turma[5];
    int i;
    float media[5];
    LeAluno(Turma);
    ImprimeTurma(Turma);
    for(i=0;i<5;i++){
        media[i] = CalculaMediaAluno(Turma,i);
        printf("Aluno %d  - Media = %f\n",Turma[i].matricula,media[i]);
    }
    return 0;
}
