//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 1 Funcao Ackermann

#include <stdlib.h>
#include <stdio.h>

int fack(int num1, int num2){
    int resultado;
    if(num1==0){
        resultado=num2+1;
    } else if((num2==0) && (num1>0)){
        resultado=fack(num1-1, 1);
    } else if((num2>0) && (num1>0)){
        resultado=fack(num1-1, fack(num1, num2-1));
    }
    return resultado;
}

int main() {
    //Funcao nao recursiva primitiva
    //Tres numeros naturais como argumentos
    //Ackermann-Peter possui dois argumentos
    //Numeros naturais m e n

    int m, n, s;
    scanf("%d %d", &m, &n);
    if((m>=0) && (n>=0)){       //Verifica se numeros sao naturais
        s=fack(m, n);
        printf("%d", s);
    }
    return 0;
}
