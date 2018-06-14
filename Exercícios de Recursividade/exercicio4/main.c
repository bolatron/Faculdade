#include <stdio.h>
#include <stdlib.h>
float soma(float reais[], int i){
    if(i<10)
        return soma(reais, i+1) + reais[i];
    else
        return reais[i];
}
int main()
{
    float reais[5];
    int i;
    for(i=0;i<5;i++)
        scanf("%f", &reais[i]);
    i=0;
    printf("A SOMA EH: %f\n", soma(reais, i));
    return 0;
}
