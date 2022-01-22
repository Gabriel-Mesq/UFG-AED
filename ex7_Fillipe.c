//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Exercicio 7 SAPO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Espacamento entre pedras e de 1 metro
    //N e o numero de pedras no rio N>= 1
    //M e o numero de sapos M <= 100
    //Cada M linha seguinte tem dois numeros, P (posicao inicial) e D (distancia fixa de pulo)
    //A posicao das pedras segue o padrao 1, 2, 3...


    int N, M, i, j;       //N e o numero dee a quantidade de rotulos e K a quantidade de balas produzidas, de 1 a K
    scanf("%d %d", &N, &M);
    if(N >= 1 && M <= 100){
        int *p = (int*)malloc(N * sizeof(int*));    //armazena se ha ou nao sapo
        int *q = (int*)malloc(M * sizeof(int*));    //pedra inicial
        int *w = (int*)malloc(M * sizeof(int*));    //distancia fixa de salto
        if(p != NULL && q != NULL && w != NULL){
            for(i=0;i<M;i++){
                scanf("%d %d", &q[i], &w[i]);
            }
            for(j=0;j<N;j++){
                p[j]=0;
            }
            for(i=0;i<M;i++){
                for(j=0;j<N;j++){
                    if((q[i]-j*w[i]) > 0){
                        p[q[i]-j*w[i]-1]=1;
                    }
                }
            }
            for(i=0;i<M;i++){
                for(j=0;j<N;j++){
                    if((q[i]+j*w[i]) <= N){
                        p[q[i]+j*w[i]-1]=1;
                    }
                }
            }
            for(j=0;j<N;j++){
                printf("%d\n", p[j]);
            }
        }
    }
    return 0;
}
