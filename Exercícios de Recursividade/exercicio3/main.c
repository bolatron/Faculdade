#include <stdio.h>
#include <stdlib.h>
int pow(int x, int n, int i){
    if(i<n)
        return pow(x, n, i+1) * x;
    else
        return x;
}
int main()
{
    int x, n, i=1;
    printf("DIGITE UM NUMERO E A BASE A SER ELEVADO: ");
    scanf("%d %d", &x, &n);
    printf("%d\n",pow(x ,n, i));
    return 0;
}
