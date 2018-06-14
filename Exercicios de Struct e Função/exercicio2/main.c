#include <stdio.h>
#include <stdlib.h>
typedef struct b{
    int dia;
    int mes;
    int ano;
}D;
typedef struct a{
    char nome[100];
    float altura;
    D Data;
}Pessoa;
void InsiraNome(Pessoa Pessoas[],int i){
    printf("Digite o nome: ");
    scanf("%s",Pessoas[i].nome);
    printf("Digite a altura: ");
    scanf("%f",&Pessoas[i].altura);
}
void ListarNome(Pessoa Pessoas[],int i){
    printf("%s\n",Pessoas[i].nome);
    printf("%f\n",Pessoas[i].altura);
}
void MaisNova(Pessoa Pessoas[],int i,int dia,int mes,int ano){
    if(Pessoas[i].Data.ano<ano)
        printf("%d/%d/%d\n",Pessoas[i].Data.dia,Pessoas[i].Data.mes,Pessoas[i].Data.ano);
    if(Pessoas[i].Data.ano==ano){
        if(Pessoas[i].Data.mes<mes)
            printf("%d/%d/%d\n",Pessoas[i].Data.dia,Pessoas[i].Data.mes,Pessoas[i].Data.ano);
        if(Pessoas[i].Data.mes==mes){
            if(Pessoas[i].Data.dia<=dia){
                printf("%d/%d/%d\n",Pessoas[i].Data.dia,Pessoas[i].Data.mes,Pessoas[i].Data.ano);
            }
        }
    }
}
int main()
{
    int i,dia,mes,ano;
    Pessoa Pessoas[10];
    printf("Forneca uma data qualquer sem barra e com espaco entre os numeros: ");
    scanf("%d %d %d",&dia,&mes,&ano);
    for(i=0;i<10;i++){
        InsiraNome(Pessoas,i);
        Pessoas[i].Data.dia=1+(rand()%30);
        Pessoas[i].Data.mes=1+(rand()%12);
        Pessoas[i].Data.ano=1950+(rand()%49);
    }
    for(i=0;i<10;i++){
        ListarNome(Pessoas,i);
        MaisNova(Pessoas,i,dia,mes,ano);
    }
    return 0;
}
