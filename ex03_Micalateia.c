#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

typedef int bool;

typedef struct {

    char nome[25];
    char numero[15];
    int ligacoes;

} DADOS;

typedef struct {

    DADOS A[1000];
    int n_elemento;

} LISTA;

void iniciar_lista(LISTA *l) {

    l->n_elemento = 2;

    strcpy(l->A[0].nome, "Hermanoteu");
    strcpy(l->A[0].numero, "4523-2248");
    l->A[0].ligacoes = 300;

    strcpy(l->A[1].nome, "Ooloneia");
    strcpy(l->A[1].numero, "4523-4887");
    l->A[1].ligacoes = 299;
}

int busca_sequencial(LISTA *l) {

    char nome[25];
    int i;

    scanf("%s", &nome);

    for (i = 0; i < l->n_elemento; i++) {

        if (strcmp(l->A[i].nome, nome) == 0) {

            return i;
        }
    }

    return -1;
}

void inserir_contato(LISTA *l) {

    char nome[25], numero[15];

    int ligacoes, i;

    scanf("%s %s %d", &nome, &numero, &ligacoes);

    strcpy(l->A[l->n_elemento].nome, nome);

    strcpy(l->A[l->n_elemento].numero, numero);

    l->A[l->n_elemento].ligacoes = ligacoes;

    l->n_elemento++;
}

void remover_contato(LISTA *l) {

    char nome[25];

    int pos, i;

    pos = busca_sequencial(l);

    if (pos == -1) {

        printf("n existe contato!\n");
    }

    for (i = pos; i < l->n_elemento + 1; i++) {

        strcpy(l->A[i].nome, l->A[i + 1].nome);

        strcpy(l->A[i].numero, l->A[i + 1].numero);

        l->A[i].ligacoes = l->A[i + 1].ligacoes;
    }

    l->n_elemento--;
}

void aumentar_ligacao(LISTA *l) {

    int i, pos;

    pos = busca_sequencial(l);

    if (pos == -1) {

        printf("n existe contato!\n");
    }

    l->A[pos].ligacoes++;
}

void mostrar_numero(LISTA *l) {

    int i, j, aux;

    char nome_aux[25];

    for (i = 0; i < l->n_elemento; i++) {

        for (j = i + 1; j < l->n_elemento; j++) {

            if (l->A[i].ligacoes < l->A[j].ligacoes) {

                aux = l->A[i].ligacoes;

                l->A[i].ligacoes = l->A[j].ligacoes;

                l->A[j].ligacoes = aux;

                strcpy(nome_aux, l->A[i].nome);

                strcpy(l->A[i].nome, l->A[j].nome);

                strcpy(l->A[j].nome, nome_aux);

                strcpy(nome_aux, l->A[i].numero);

                strcpy(l->A[i].numero, l->A[j].numero);

                strcpy(l->A[j].numero, nome_aux);
            }
        }
    }

    for (j = 0; j < l->n_elemento; j++) {

        printf("%s - %s %d\n", l->A[j].nome, l->A[j].numero, l->A[j].ligacoes);
    }
}

int main() {

    int i, j;
    char c;

    LISTA *p;

    p = (LISTA *)malloc(sizeof(LISTA));

    iniciar_lista(p);

    while (1) {

        scanf("%c", &c);

        if (c == 'I') {

            inserir_contato(p);
        }

        else if (c == 'R') {

            remover_contato(p);
        }

        else if (c == 'L') {

            aumentar_ligacao(p);
        }

        else if (c == 'F') {

            mostrar_numero(p);

            break;
        }
    }

    return 0;
}