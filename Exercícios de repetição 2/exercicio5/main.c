#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,n1=2,j;
    do{
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&n);
    }while(n<=0);
    n=2*n-1;
    for(i=1;i<=n/2;i++){
       if(i%2!=0){
        for(j=1;j<n1;j++)
            printf("#");
        }if(i%2==0){
        for(j=1;j<n1;j++)
            printf("*");
        }
        n1++;
        printf("\n");
        }
    if(n%2!=0){
        n=n+1;
    }
    n1=n/2;
    for(i=n/2;i>=0;i=i-1){
        if(i%2!=0){
        for(j=1;j<=n1;j++)
            printf("#");
        }if(i%2==0){
        for(j=1;j<=n1;j++)
            printf("*");
            }
    n1=n1-1;
    printf("\n");
    }
    system("pause");
    return 0;
}
