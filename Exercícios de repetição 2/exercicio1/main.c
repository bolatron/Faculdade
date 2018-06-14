#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal1,sal2;int meses=1;
    printf("Digite o salario de Carlos: ");
    scanf("%f",&sal1);
    for(sal2=sal1/3;sal1>=sal2;meses++){
        sal1=sal1*1.02;
        sal2=sal2*1.05;
    }
    printf("%d meses\n",meses);
    system("pause");
    return 0;
}
