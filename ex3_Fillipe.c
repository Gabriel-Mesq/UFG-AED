//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Exercicio 3 OVERFLOW

#include <stdio.h>
#include <math.h>

int soma(int A, int B){
    int resultadoSoma;
    resultadoSoma = A+B;
    return resultadoSoma;
}

int multiplicacao(int C, int D){
    int resultadoMultiplicacao;
    resultadoMultiplicacao = C*D;
    return resultadoMultiplicacao;
}

int main() {
    //Receber o maior numero que um computador consegue armazenar na memoria
    //Realizar uma expressao de soma ou multiplicacao entre dois numeros inteiros positivos
    //O que ocorre?

    int N, P, Q, resultado;  //Maior numero inteiro 8 bits
    char C;     //Tipo de operacao
    
    scanf("%d\n", &N);
    scanf("%d %c %d", &P, &C, &Q);
    if(C =='+'){
        resultado = soma(P, Q);
        if(resultado > N){
            printf("OVERFLOW");
        } 
        else{
            printf("OK");
        }
    }
    else if(C =='*'){
        resultado = multiplicacao(P, Q);
        if(resultado > N){
            printf("OVERFLOW");
        }
        else{
            printf("OK");
        }
    }
}