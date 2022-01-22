//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Exercicio 4 CAPICUA

#include <stdio.h>

int main() {
    //Verificar se o numero digitado e um palindromo
    int i, N, M, C, D, U, numero;
    scanf("\n%d",&N);    //Numero de linhas com numeros inteiros
    if(N >= 1){
        for(i=0;i<N;i++){
            scanf("\n%d", &numero);
            if((numero >= 0000) && (numero <= 9999)){
                U=numero%10;
                D=(numero/10)%10; 
                C=(numero/100)%10; 
                M=numero/1000;
                if((U == M) && (D == C)){
                    printf("S\n");
                } else{
                    printf("N\n");
                }
            }
        }   
    }
}