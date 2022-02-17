//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 1 Fibonacci

#include <stdlib.h>
#include <stdio.h>

int fibonacci(int num){
    int resultado;
    if(num==1 || num==2){
        resultado = 1;
    } else{
        resultado = fibonacci(num-1)+fibonacci(num-2);
    }
    return resultado;
}




int main() {
    int n, s;
    scanf("%d", &n);
    if(n>=0){
        s=fibonacci(n);
        printf("%d", s);
    }
    return 0;
}
