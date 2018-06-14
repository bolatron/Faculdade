#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    printf("A string possui 100 caracteres!\n");
    scanf("%s",str);
    i=strlen(str);
    printf("%d\n",100-i);
    return 0;
}
