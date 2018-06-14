#include <stdio.h>

typedef struct _ {
    int inicio, dados[10], aux[10], i;
} list;


void insert(int n, list *l) {
    l->dados[l->i++] = n;
}

void _print(list);

int main() {
    int i, n;
    list l; l.i = 0;
    while (1) {
        printf("Digite uma operacao\n0 - Inserir\t1 - Imprimir\n>> ");
        scanf("%d", &i);
        if (i == 0) {
            printf("Digite n\n>> ");
            scanf("%d", &n);
            insert(n, &l);
        }
        else if (i == 1) _print(l);
        else printf("Inválido\n");
    }
    return 0;
}

void _print(list l) {
    int i;
    for (i = 0; i < l.i; i++) printf("%d, ", l.dados[i]);
    printf("\b\b  \n");
}
