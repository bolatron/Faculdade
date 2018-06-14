#include <stdio.h>
int MDC(int x, int y){
if(x>y)
    return MDC(x-y, y);
if(x<y)
    return MDC(y, x);
if(x==y)
    return x;
}
int main(){
    int x, y;
    printf("DIGITE DOIS NUMEROS INTEIROS: ");
    scanf("%d %d", &x, &y);
    printf("MAXIMO DIVISOR COMUM DE %d E %d EH: %d\n", x, y, MDC(x, y));
    return 0;
}
