//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 10 Coelhos Mutantes

#include <stdio.h>

int nt(int t, int c){
    if(t==0){
        return 0;
    } else {
        scanf("%d", &c);
        printf("%d\n", (c/2)*3 + ((c/2)+(c%2))*2);
        return nt(t-1, c);
    }
}

int main() {
    int testes;
    scanf("%d", &testes);
    nt(testes, 0);
}



