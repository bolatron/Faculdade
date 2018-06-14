#include <stdio.h>
#include <stdlib.h>
float media(float v[],int i){
    int j;
    float media;
    for(j=0;j<i;j++){
        media=media+v[j];
    }
    return media/i;
}
int main()
{
    float v[3];
    int i;
    for(i=0;i<3;i++){
        printf("Valor i: ",i+1);
        scanf("%f",&v[i]);
    }
    printf("%f\n",media(v,i));
    system("pause");
    return 0;
}
