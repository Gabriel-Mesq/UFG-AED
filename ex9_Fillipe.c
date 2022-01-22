//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Exercicio 9 VETORES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <locale.h>

int main()
{
    //setlocale(LC_ALL, "Portuguese");    //Para permitir acentuacao
    //Multiplicacao de dois numeros com muitos digitos
    //1 <= N <= 40
    //1 <= M <= 40
    //unsigned long long int resultadoFinal;
    int N = 0, M = 0, i = 0, j = 0, k = 0, sobe = 0;
    scanf("%d %d", &N, &M);
    if(N>=1 && N<=40 && M>= 1 && M <=40){
        char frase[N+M+1], fraseFinal[N+M];
        int numero1[N], numero2[M], resultado[N+M], tamanho;
        scanf(" %[^\n]s", frase);
        //printf("\n---\nnumero1\n");
        for(i=0;i<N;i++){
            numero1[i]=frase[N-i-1]-'0';
            //printf("%d", numero1[i]);
        }
        //printf("\n---\nnumero2\n");
        for(i=0;i<M;i++){
            numero2[i]=frase[N+M-i]-'0';
            //printf("%d", numero2[i]);
        }
        //printf("\n---\nresultado zerado\n");
        for(i=0;i<(N+M);i++){
            resultado[i] = 0;
            //printf("%d", resultado[i]);
            }
        //printf("\n---\ncalculo\n");
        for(j=0;j<N;++j){
            sobe = 0;
            for(i=0;i<M;++i){
                resultado[N+M-i-j-1] += sobe + (numero1[j] * numero2[i]);
                sobe = (resultado[N+M-i-j-1] / 10);
                resultado[N+M-i-j-1] = (resultado[N+M-i-j-1] % 10);
                //printf("%d\n", resultado[N+M-i-j-1]);
            }
            if(sobe!=0){
                resultado[N+M-i-j-1] = sobe;
                //printf("---\n%d\n-----\n", resultado[N+M-i-j-1]);
            }
        }
        for(k=0;k<(N+M);k++){
            if(resultado[0]==0 && k<(N+M-1)){
                //tamanho = sizeof(fraseFinal)-1;
                //fraseFinal[k]=resultado[k+1]+'0';
                printf("%d", resultado[k+1]);
            }else if(resultado[0] != 0){
                //fraseFinal[k]=resultado[k]+'0';
                //tamanho = sizeof(fraseFinal);
                printf("%d", resultado[k]);
            }
        }

       //printf("%.*s", tamanho, fraseFinal);
        //resultadoFinal = strtoull(fraseFinal, NULL, 10);
        //printf("%.*llu", sizeof(resultadoFinal), resultadoFinal);
    }
    return 0;
}
