#include <stdio.h>
#include <string.h>
void intercala(char *str1[],char *str2[]){
    int i,j,cont;
    int tam1 = strlen(*str1);
    int tam2 = strlen(*str2);
    int tamTotal = tam1+tam2;
    char str3[100];
    for(i=0,j=0,cont=0;cont<tamTotal;cont++){
        if(cont%2 == 0){
            str3[cont] = *str1[i];
            i++;
        }else{
            str3[cont] = *str2[j];
            j++;
        }
    }
    str3[cont]='\0';
    strcpy(*str1,str3);
}
int main()
{
    int i;
    char str1[100], str2[100];
    printf("Informe a primeira string: ");
    scanf("%s",str1);
    printf("Informe a segunda string: ");
    scanf("%s",str2);
    intercala(str1,str2);
    printf("\n");
    for(i=0;str1[i]!='\0';i++){
        printf("%c",str1[i]);
    }
    printf("\n");
    system("PAUSE");
}
