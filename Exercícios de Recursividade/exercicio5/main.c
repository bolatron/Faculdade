#include <stdio.h>
#include <stdlib.h>
void inverte(int inteiro[], int i, int n){
    if(i<n){
        int aux=inteiro[i];
        inteiro[i]=inteiro[n];
        inteiro[n]=aux;
        return inverte(inteiro, i+1, n-1);
    }else
        return;
}
int main()
{
    int inteiro[6], i;
    for(i=0;i<6;i++)
        scanf("%d", &inteiro[i]);
    printf("----------ANTES----------\n");
    for(i=0;i<6;i++)
        printf("%d ", inteiro[i]);
    printf("\n----------DEPOIS----------\n");
    i=0;
    int n=5;
    inverte(inteiro, i, n);
    for(;i<6;i++)
        printf("%d ", inteiro[i]);
    return 0;
}
