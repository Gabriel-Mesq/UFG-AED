//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 11 Log base 2

#include <stdio.h>
#include <math.h>

int base(int n, int c){
    if(n/2==0){
        return printf("%d\n", c);
    } else {
        return base(n/2, c+1);
    }
}

int main() {
    int testes, i, num;
    scanf("%d", &testes);
    if(testes>0 && testes<=100){
        for(i=0;i<testes;i++){
            scanf("%d", &num);
            if(num>0){
                base(num, 0);
            }
        }
    }
}



