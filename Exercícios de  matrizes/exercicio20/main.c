#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[3][6];
    int i,j,count=0;
    float soma=0;
    float media=0;
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            scanf("%f",&matriz[i][j]);
            if(j%2==0)
                soma=soma+matriz[i][j];
            if(j==2 || j==4){
                media=media+matriz[i][j];
                count++;
            }
            if(j==6)
                matriz[i][6]=matriz[i][1]+matriz[i][2];
        }
    }
    printf("Soma: %.2f\n",soma);
    printf("Media aritmetica: %.2f\n",media/count);
    printf("Matriz modificada:\n");
    for(i=0;i<3;i++)
        printf("%f\n",matriz[i][6]);
    return 0;
}
