//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 6 5 vezes

#include <stdlib.h>
#include <stdio.h>

//Todas as string sao escritas com letras minusculas

int conta5(int n){
    if((n%10) == 5){
        return 1 + conta5(n/10);
    } else if(n == 0){
        return 0;
    } else{
        return 0 + conta5(n/10);
    }

}

int main() {
    int i, numero, numtestes, tamanho;
    scanf("%d", &numtestes);

    if(numtestes > 0){
        for(i=0;i<numtestes;i++){
            scanf("%d", &numero);
            if(numero>0){
                tamanho = sizeof(numero);
                printf("%d\n", conta5(numero));
            }

        }
    }
}
