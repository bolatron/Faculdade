#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100];
    int i,soma=0;
    for(i=0;i<200;i++){
        A[i]=i;
        if(A[i]%7!=0){
            printf("%d ",A[i]);
            soma++;
        }
        if(soma>100){
            break;
        }
    }
    return 0;
}
