//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 3 Imprimir numeros naturais

#include <stdlib.h>
#include <stdio.h>

int naturais(int num1, int num2){
    printf("%d ", num2);
    if(num1>num2){
        return naturais(num1, num2+1);
    }else{
        return 0;
    }
}

int main() {
    int n, m = 1;
    scanf("%d", &n);
    if(n>=0){
        naturais(n, m);
    }
    return 0;
}
