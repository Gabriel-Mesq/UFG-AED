//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 8 Soma

#include <stdio.h>
#include <math.h>

int f(int x1, int aux, int aux2){
    if(x1==0){
        return aux;
    } else {
        aux2=aux2+1;
        aux=aux+aux2;
        x1=x1-1;
        return f(x1, aux, aux2);
    }
}


int main() {
    int x, T, i;
    scanf("%d", &T); //Casos de teste
        for(i=0;i<T;i++){
        scanf("%d", &x);
        if(x>0)
            printf("%d\n", f(x, 0, 0));
    }
}
