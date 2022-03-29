#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>
#include <string.h>

#define true 1
#define false -1

typedef int bool;

typedef struct {

    char expressao[1000];

} REGISTRO;

typedef struct aux {

    REGISTRO reg;
    struct aux *prox;

} ELEMENTO;

typedef ELEMENTO *PONT;

typedef struct {

    PONT inicio;

} LISTA;

void iniciarLista(LISTA *l) {

    l->inicio = NULL;
}

bool inserirExpressao(LISTA *l) {

    PONT end;

    end = (PONT)malloc(sizeof(ELEMENTO));

    end->prox = l->inicio;

    l->inicio = end;

    char str[1000];

    scanf("%[^\n]", str);

    strcpy(l->inicio->reg.expressao, str);

    return true;
}

bool balanceamento(LISTA *l) {

    char abre = '(', fecha = ')';

    PONT end = l->inicio;

    while (end != NULL) {

        int i, tam = strlen(end->reg.expressao);

        int cont_abre = 0;

        for (i = 0; i < tam; i++) {

            if (end->reg.expressao[i] == abre) {

                cont_abre++;
            }

            else if (end->reg.expressao[i] == fecha && cont_abre < 1) {

                return false;
            }

            else if (end->reg.expressao[i] == fecha) {

                cont_abre--;
            }
        }

        if (cont_abre != 0) {

            return false;
        }

        return true;
    }
}

int main() {

    LISTA l;

    iniciarLista(&l);

    int res = inserirExpressao(&l);

    int resultado = balanceamento(&l);

    if (resultado == false) {

        printf("incorreta\n");
    }

    else if (resultado == true) {

        printf("correta\n");
    }

    return 0;
}