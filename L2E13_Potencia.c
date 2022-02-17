//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 13 Potencia

//#include <stdio.h>

/* int pot(int m1, int n1, int count){
    if(m1!=0 && n1==0){
        return 1;
    } else if(m1==0){
        return 0;
    } else if(count==0){
        return 1;
    } else{
        return m1*pot(m1, n1, count-1);
    }
}

int main() {
    int testes, M, N, i;
    scanf("%d", &testes);
    if(testes>=1 && testes<=300){
        for(i=0; i<testes; i++){
            scanf("%d %d", &M, &N);
            printf("%d\n", pot(M, N, N));
        }
    }
} */

/* int pot(int m1, int n1){
    if(n1==0){
        return 1;
    } else{
        return m1*pot(m1, n1-1);
    }
}

int main() {
    int T, M, N, i;
    scanf("%d", &T);
    if(T>=1 && T<=300){
        for(i=0; i<T; i++){
            scanf("%d %d", &M, &N);
            if(M>0 && N>0){
                printf("%d\n", pot(M, N));
            }
        }
    }
} */

/* int pot(int m1, int n1){
    if(m1!=0 && n1==1){
        return m1;
    } else if(m1==0 && n1!=0){
        return 0;
    } else if(m1!=0 && n1==0){
        return 1;
    } else{
        return m1*pot(m1, n1-1);
    }
}

int main() {
    int T, M, N, i;
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%d %d", &M, &N);
        printf("%d\n", pot(M, N));
    }
} */

#include <stdio.h>

int pot(int m1, int n1){
    if(n1==1){
        return m1;
    } else if(n1==0){
        return 1;
    } else{
        return m1*pot(m1, n1-1);
    }
}

int main() {
    int T, M, N, i;
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%d %d", &M, &N);
        printf("%d\n", pot(M, N));
    }
}

