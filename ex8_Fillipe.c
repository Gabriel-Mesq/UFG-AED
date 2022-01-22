//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Exercicio 8 PRIMOS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Identificar se um dado numero inteiro positivo e primo
    //N e a quantidade de numero inteiros positivos que serao testados
    //Responder sim ou nao para primo
    //N deve ter limite de 2 a 2^64-1 unsigned long


    unsigned long N, i, j;       //N e o numero dee a quantidade de rotulos e K a quantidade de balas produzidas, de 1 a K
    scanf("%lu", &N);
    if(N >= 1){
        unsigned long *p = (unsigned long*)malloc(N * sizeof(unsigned long*));    //armazena os numeros digitados
        char *q = (char*)malloc(N * sizeof(char*));    //armazena a resposta
        if(p != NULL && q != NULL){
            for(i=0;i<N;i++){
                scanf("%lu", &p[i]);
                for(j=2;j<=p[i];j++){
                    if(p[i] % j == 0){
                      if(p[i]==j){
                        q[i] = 'S';
                      } else {
                        q[i] = 'N';
                        break;
                      }
                    } else {
                      q[i] = 'N';
                    }
                }
            }
            for(i=0;i<N;i++){
                printf("%c \n", q[i]);
            }
        }
    }
    return 0;
}
