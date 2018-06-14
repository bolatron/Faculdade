#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=1,primos,n1,i,j,div=0;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d",&n1);
    do{
    for(i=2;i<=n1;i++){
        for(j=2;j<=i;j++){
            if(i%j==0)
                div++;
            if(div>1)
                break;
        }
        if(div==1){
            primos=n1+primos;
            k++;
            }
    }
    }while(k<2);
    printf("%d\n",primos);
    system("pause");
    return 0;
    }
