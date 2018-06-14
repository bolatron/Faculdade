#include <stdio.h>
#include <stdlib.h>

char maiuscula(int);
int main(){
    char c;
    while((c=getchar())!=-1)
    if(maiuscula(c))
        putchar(c+('a'-'A'));
    else
        putchar(c);
    return 0;
}
char maiuscula(int c) {return(c>='A' && c<='Z'); }
