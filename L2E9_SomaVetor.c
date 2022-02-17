//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 9 Soma Vetor

#include <stdio.h>

int f(int v[], int t, int cont){
    if(cont==(t-1)){
        return v[cont];
    } else {
        return v[cont] + f(v, t, cont+1);
    }
}


int main() {
    int testes, tam, i, j;
    scanf("%d", &testes);
    for(i=0;i<testes;i++){
        scanf("%d", &tam);
        int valores[tam];
        if(tam>=1 && tam<=30){
            for(j=0;j<tam;j++){
                scanf("%d", &valores[j]);
            }
            printf("%d\n", f(valores, tam, 0));
        }
    }
}


