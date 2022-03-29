#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>

typedef int bool;

#define MAX 30000
#define TRUE 1
#define FALSE -1

typedef struct {

    int cor;

} REGISTRO;

typedef struct {

    REGISTRO A[MAX];
    int n_elemento;

} LISTA;

typedef struct {

    int cor;
    int qntApareceu;

} registroCOR;

typedef struct {

    registroCOR cores[MAX];
    int qntCores;

} CORES;

void inicia_lista(LISTA *l) {

    l->n_elemento = 0;
}

void inicializarLC(CORES *lc, int c) {

    int i;

    for (i = 0; i < c; i++) {

        lc->cores[i].cor = -1;

        lc->cores[i].qntApareceu = 0;
    }
}

void atualizaCores(CORES *lc, int cor) {

    int i, tam = lc->qntCores;

    for (i = 0; i < tam; i++) {

        if (lc->cores[i].cor == cor) {

            lc->cores[i].qntApareceu++;

            return;
        }
    }

    lc->cores[lc->qntCores].cor = cor;

    lc->cores[lc->qntCores].qntApareceu = 1;

    lc->qntCores++;
}

int foto_boa(LISTA *l, int a, int b, int c) {

    --a;
    --b;

    int i;
    CORES lc;

    inicializarLC(&lc, c);

    lc.qntCores = 0;

    for (i = a; i <= b; i++){

        atualizaCores(&lc, l->A[i].cor);
    }

    int qntAnoes = b - a + 1;

    for (i = 0; i < lc.qntCores; i++) {

        if (lc.cores[i].qntApareceu > (qntAnoes / 2))

            return lc.cores[i].cor;
    }

    return -1;
}

int main() {

    int t;

    int i, j;

    scanf("%d", &t);

    for (i = 0; i < t; i++){

        int n, c;

        LISTA l;

        inicia_lista(&l);

        scanf("%d %d", &n, &c);

        for (j = 0; j < n; j++) {

            scanf("%d", &l.A[j].cor);

            l.n_elemento++;
        }

        int m, a, b;

        scanf("%d", &m);

        for (j = 0; j < m; j++){

            int res;

            scanf("%d %d", &a, &b);

            res = foto_boa(&l, a, b, c);

            if (res > 0) {

                printf("bonita %d\n", res);
            }

            else {

                printf("feia\n");
            }
        }
    }

    return 0;
}