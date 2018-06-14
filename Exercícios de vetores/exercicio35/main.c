#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4];
    int b[4];
    int soma[5];
    int A,B,i;
    do{
        printf("Digite um valor para 'a': ");
        scanf("%d",&A);
    }while(A<0 && A>10000);
    do{
        printf("Digite um valor para 'b': ");
        scanf("%d",&B);
    }while(B<0 && B>10000);
        a[0]=(int)A%10;
        A=(int)A/10;
        a[1]=(int)A%10;
        A=(int)A/10;
        a[2]=(int)A%10;
        A=(int)A/10;
        a[3]=A;
        b[0]=(int)B%10;
        B=(int)B/10;
        b[1]=(int)B%10;
        B=(int)B/10;
        b[2]=(int)B%10;
        B=(int)B/10;
        b[3]=B;
    for(i=0;i<4;i++){
        if(a[i]+b[i]>=10){
            soma[i]=a[i]+b[i]-10;
            a[i+1]++;
        }else{
            soma[i]=a[i]+b[i];
        }
    }
    printf("A soma foi: %d%d%d%d",soma[3],soma[2],soma[1],soma[0]);
    return 0;
}
