#include <stdio.h>
#include <stdlib.h>

int main()
{
    char data[9];
    scanf("%s",data);
    if(data[2]=='/' && data[5]=='/')
        printf("Dia:%c%c\nMes:%c%c\nAno:%c%c%c%c\n",data[0],data[1],data[3],data[4],data[6],data[7],data[8],data[9],data[10]);
    else
        printf("Formato de incorreto!\n");
    return 0;
}
