#include <stdio.h>
#include <stdlib.h>
typedef struct a{
    int p, q;
}racional;
float reduz(int a, int b){
    int i;
    for(i=b;i>2;i--){
        if(a%i==0 && b%i==0){
            a = a/i;
            b = b/i;
        }
    }
    return (float)a/b;
}
float neg(float x){
    return (float)(-1)*x;
}
float soma(float x, float y){
    return x+y;
}
float mult(float x, float y){
    return x*y;
}
float divis(float x, float y){
    return x/y;
}
int main()
{
    int result=0, i;
    racional A;
    do{
        printf("Digite o numerador: ");
        scanf("%d",&A.p);
        printf("Digite o denominador: ");
        scanf("%d",&A.q);
        for(i=A.q;i>2;i--){
            if(A.p%i==0 && A.q%i==0)
                result=1;
        }
    }while(A.q<=0 && result==1);
    float racional1 = (float)A.p/A.q;
    float racional2 = reduz(A.p, A.q);
    printf("%f\n", neg(racional1));
    printf("%f\n", soma(racional1, racional2));
    printf("%f\n", mult(racional1, racional2));
    printf("%f\n", divis(racional1, racional2));
    return 0;
}
