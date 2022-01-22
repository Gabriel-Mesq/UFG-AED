//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Exercicio 5 COMPUTACAO

#include <stdio.h>
#include <stdlib.h>
long long convert(int n){
    long long qua = 0;
}


int main() {
    //Receber um numero inteiro positivo, na base decimal, e converter para base 4 por divisoes sucessivas
    //Ler uma lista de numeros e calcular cada um na base 4: 0, 1, 2, 3

    int N, i, numero, baseQuatro = 0, resto = 0, posicao = 1;
    scanf("%d", &N);
    if(N >= 1){
        int *p = (int*)malloc(N * sizeof(int*)); //cast do ponteiro de void para int, de tamanho N * espaco de int
        if(p != NULL){
            for(i=0;i<N;i++){
                scanf("%d", &p[i]);
                numero = p[i];
                while(numero){      //Enquanto numero for diferente de zero
                    resto = numero % 4;
                    baseQuatro = baseQuatro + resto * posicao;
                    numero = numero / 4;
                    posicao = posicao * 10;
                }
                printf("%d\n", baseQuatro);
                baseQuatro = 0;
                resto = 0;
                posicao = 1;
            }    
        }
    }
    return 0;
}