#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void tamanho(char *str, int *strsize){
    *strsize=strlen(str);
}
int main()
{
    char str[100];
    int strsize;
    printf("Digite a String: ");
    scanf("%s",str);
    tamanho(str,&strsize);
    printf("Tamanho: %d\n",strsize);
    system("pause");
    return 0;
}
