#include <stdio.h>
#include <stdlib.h>
void simplifica(int *den,int *num){
    int maior;
    if(*den<*num)
        maior=*den;
    else
        maior=*num;
    for(;maior>2;maior--){
        if(*den%maior==0 && *num%maior==0){
            *den=*den/maior;
            *num=*num/maior;
            return;
        }
    }
}

int main()
{
    int den,num,i,j;
    printf("Denominador: ");
    scanf("%d",&den);
    printf("Numerador: ");
    scanf("%d",&num);
    simplifica(&den,&num);
    printf("Simplificado: %d/%d\n", den, num);
    return 0;
}
