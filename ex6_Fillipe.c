//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Exercicio 6 ENVELOPES

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Promocao exige enviar um rotulo de cada tipo de bala
    //Um envelope e um combinacao entre os tipos de bala
    //Nao ha limite para o numero de envelopes enviados
    //Determinar a quantidade maxima de envelopes que podem ser enviados

    int N, K, i, j, min;       //N e a quantidade de rotulos e K a quantidade de balas produzidas, de 1 a K
    scanf("%d %d", &N, &K);
    if(N >= 1 && K >= 1){
        int *p = (int*)malloc(N * sizeof(int*));    //cast do ponteiro de void para int, de tamanho N * espaco de int
        int *q = (int*)malloc(K * sizeof(int*));    //Contador
        int *w = (int*)malloc(K * sizeof(int*));    //Numero armazenado
        if(p != NULL && q != NULL && w != NULL){
            for(i=0;i<N;i++){
                scanf("%d", &p[i]);
                for(j=K;j>0;j--){
                    if(p[i]==j){
                        q[j-1]++;
                        w[j-1]=p[i];
                    }    
                }
            }
            for(j=0;j<K;j++){
                if((q[j]<=q[j+1]) && (j != (K-1))){
                    min = q[j];
                } else if(j != (K-1)){
                    min = q[j+1];
                }
                //printf("%d %d\n", q[j], w[j]);
            }
            printf("%d", min);
        }
    }
    return 0;
}
