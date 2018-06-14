#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A[10];
    float B[10];
    int i;
    printf("DIGITE 10 NUMEROS: \n");
    for(i=0;i<10;i++){
        scanf("%f",&A[i]);
        B[i]=A[i]*A[i];
    }
    printf("CONJUNTO A: \n");
    for(i=0;i<10;i++)
        printf("%.1f\n",A[i]);
    printf("------------------\n");
    printf("CONJUNTO B: \n");
    for(i=0;i<10;i++)
        printf("%.1f\n",B[i]);
    system("pause");
    return 0;
}
