#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,c;
    printf("Digite a frase:\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        str[i]=getchar();
        putchar('str[i]'+4);
    }
    for(i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
    return 0;
}
