#include <stdio.h>
#include <stdlib.h>
struct Ponto{
int x;
int y;
};
int dentroRet(struct Ponto *v1,struct Ponto *v2,struct Ponto *p){
    if(p->x>v1->x && p->x<v2->x && p->y>v1->y && p->y<v2->y)
        return 1;
    return 0;
}
int main(){
    struct Ponto v1;
    struct Ponto v2;
    struct Ponto p;
    printf("Digite o ponto inferior(X,Y): ");
    scanf("%d %d",&v1.x,&v1.y);
    printf("Digite o ponto superior(X,Y): ");
    scanf("%d %d",&v2.x,&v2.y);
    printf("Digite um ponto qualquer(X,Y): ");
    scanf("%d %d",&p.x,&p.y);
    printf("%d\n",dentroRet(&v1, &v2, &p));
    return 0;
}
