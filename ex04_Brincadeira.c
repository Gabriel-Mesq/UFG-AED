#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>
#include <string.h>

typedef int bool;

typedef struct {

    char nome[20];
    char sentido[15];

} DADOS;

typedef struct {

    DADOS A[10];
    int n_elementos;

} LISTA;

void iniciar_lista(LISTA *l){

    l->n_elementos = 0;
}

void horario(LISTA *l) {

    int i;

    for (i = 0; i < 2; i++) {

        strcpy(l->A[i].sentido, "horario");
    }
}

void anti_horario(LISTA *l){

    int i;

    for (i = l->n_elementos - 2; i < l->n_elementos; i++) {

        strcpy(l->A[i].sentido, "anti-horario");
    }
}

int remover_nome(LISTA *l){

    int i, j;

    int cont_pontos = 0;

    char nome[20], sentido[15];

    horario(l);

    anti_horario(l);

    scanf("%s %s", &nome, &sentido);

    for (i = 0; i < 2; i++) {

        if (strcmp(l->A[i].nome, nome) == 0) {

            if (strcmp(l->A[i].sentido, sentido) == 0) {

                cont_pontos++;

                for (j = i; j < l->n_elementos + 1; j++) {

                    strcpy(l->A[j].nome, l->A[j + 1].nome);
                }

                l->n_elementos--;
            }
        }
    }

    for (i = l->n_elementos - 2; i < l->n_elementos; i++) {

        if (strcmp(l->A[i].nome, nome) == 0) {

            if (strcmp(l->A[i].sentido, sentido) == 0) {

                cont_pontos++;

                for (j = i; j < l->n_elementos + 1; j++) {

                    strcpy(l->A[j].nome, l->A[j + 1].nome);
                }

                l->n_elementos--;
            }
        }
    }

    return cont_pontos;
}

int main(){

    int i, j, n;

    char nome[20], fim[5];

    strcpy(fim, "FIM");

    LISTA *p;

    p = (LISTA *)malloc(sizeof(LISTA));

    iniciar_lista(p);

    while (1) {

        scanf("%s", &nome);

        if (strcmp(fim, nome) == 0){

            break;
        }

        strcpy(p->A[p->n_elementos].nome, nome);

        p->n_elementos++;
    }

    while (1) {

        int res, resultado = 0;

        int cont = p->n_elementos;

        for (j = 0; j < cont; j++) {

            res = remover_nome(p);

            resultado = resultado + res;
        }

        printf("%d\n", resultado);

        break;
    }

    return 0;
}