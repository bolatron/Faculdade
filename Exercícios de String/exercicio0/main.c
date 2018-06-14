#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20];
    int i;
    scanf("%s",str);
    printf("%s\n",str);
    for(i=strlen(str)-1;i>-1;i--){
        printf("%c",str[i]);
    }
    return 0;
}
