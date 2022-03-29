#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>

#define true 1
#define false 0

typedef int bool;

typedef struct{

    int dificuldade;

} REGISTRO;

typedef struct aux{

    REGISTRO reg;
    struct aux *prox;

} ELEMENTO;

typedef ELEMENTO *PONT;

typedef struct {

    PONT inicio;
    PONT fim;

} FILA;

void iniciarFila(FILA *f) {

    f->inicio = NULL;

    f->fim = NULL;
}

void inserirElemento(FILA *f, REGISTRO reg) {

    PONT novo;

    novo = (PONT)malloc(sizeof(ELEMENTO));

    novo->reg = reg;

    novo->prox = NULL;

    if (f->inicio == NULL){

        f->inicio = novo;
    }

    else{

        f->fim->prox = novo;
    }

    f->fim = novo;
}

PONT buscaDecrescente(FILA *l, int ch, PONT *ant){

    *ant = NULL;

    PONT atual = l->inicio;

    while ((atual != NULL) && (atual->reg.dificuldade > ch)){

        *ant = atual;

        atual = atual->prox;
    }
}

PONT buscaCrescente(FILA *l, int ch, PONT *ant){

    *ant = NULL;

    PONT atual = l->inicio;

    while ((atual != NULL) && (atual->reg.dificuldade < ch)){

        *ant = atual;

        atual = atual->prox;
    }
}

bool inserirCrescente(FILA *l, REGISTRO reg){

    int ch = reg.dificuldade;

    PONT ant, i;

    i = buscaCrescente(l, ch, &ant);

    i = (PONT)malloc(sizeof(ELEMENTO));

    i->reg = reg;

    if (ant == NULL){

        i->prox = l->inicio;

        l->inicio = i;
    }

    else{

        i->prox = ant->prox;

        ant->prox = i;
    }

    return true;
}

bool inserirDecrescente(FILA *l, REGISTRO reg){

    int ch = reg.dificuldade;

    PONT ant, i;

    i = buscaDecrescente(l, ch, &ant);

    i = (PONT)malloc(sizeof(ELEMENTO));

    i->reg = reg;

    if (ant == NULL){

        i->prox = l->inicio;

        l->inicio = i;
    }

    else{

        i->prox = ant->prox;

        ant->prox = i;
    }

    return true;
}

void reinicializarFila(FILA *f){

    PONT end = f->inicio;

    while (end != NULL){

        PONT apagar = end;

        end = end->prox;

        free(apagar);
    }

    f->inicio = NULL;

    f->fim = NULL;
}

int contadorQuestoes(FILA *f, int tempo, int *total){

    PONT end = f->inicio;

    int pontuacao = 0, cont = 0, comparar = 0;

    while (end != NULL){

        pontuacao = pontuacao + end->reg.dificuldade;

        if (pontuacao > tempo)

            break;

        *total = *total + pontuacao;

        end = end->prox;

        cont++;
    }

    reinicializarFila(f);

    return cont;
}

int main(){

    FILA f1, f2, f3;

    int num, i, j, tempo, questoes;

    iniciarFila(&f1);

    iniciarFila(&f2);

    iniciarFila(&f3);

    scanf("%d", &num);

    for (i = 0; i < num; i++) {

        scanf("%d %d", &tempo, &questoes);

        for (j = 0; j < questoes; j++) {

            REGISTRO reg;

            scanf("%d", &reg.dificuldade);

            inserirElemento(&f1, reg);

            inserirCrescente(&f2, reg);

            inserirDecrescente(&f3, reg);
        }

        int cont1 = 0, cont2 = 0, cont3 = 0, p1 = 0, p2 = 0, p3 = 0;

        cont1 = contadorQuestoes(&f1, tempo, &p1);

        cont2 = contadorQuestoes(&f2, tempo, &p2);

        cont3 = contadorQuestoes(&f3, tempo, &p3);

        

        if (cont1 > cont2 && cont1 > cont3) {

            printf("John %d %d\n", cont1, p1);
        }

        else if (cont2 > cont1 && cont2 > cont3) {

            printf("Jack %d %d\n", cont2, p2);
        }

        else if (cont3 > cont1 && cont3 > cont2) {

            printf("Jade %d %d\n", cont3, p3);
        }

        else if (cont1 == cont2 && cont1 == cont3) {

            if (p1 == p2 && p1 == p3) {

                printf("Jack %d %d\n", cont2, p2);
            }

            else if (p1 < p2 && p1 < p3) {

                printf("John %d %d\n", cont1, p1);
            }

            else if (p2 < p1 && p2 < p3) {

                printf("Jack %d %d\n", cont2, p2);
            }

            else if (p3 < p1 && p3 < p2) {

                printf("Jade %d %d\n", cont3, p3);
            }

            else {

                printf("Jack %d %d\n", cont2, p2);
            }
        }

        else if (cont1 == cont2) {

            if (p1 < p2) {

                printf("John %d %d\n", cont1, p1);
            }

            else {

                printf("Jack %d %d\n", cont2, p2);
            }
        }

        else if (cont1 == cont3) {

            if (p1 < p3) {

                printf("John %d %d\n", cont1, p1);
            }

            else {

                printf("Jade %d %d\n", cont3, p3);
            }
        }

        else if (cont2 == cont3) {

            if (p2 < p3) {

                printf("Jack %d %d\n", cont2, p2);
            }

            else {

                printf("Jade %d %d\n", cont3, p3);
            }
        }
    }

    return 0;
}