//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 5 Hi vezes

#include <stdlib.h>
#include <stdio.h>

//Todas as string sao escritas com letras minusculas

int contax(char f[], int pos){
    if(f[pos] == 'h' && f[pos+1] == 'i'){
        return 1 + contax(f, pos+1);
    } else if(f[pos] == '\0'){
        return 0;
    } else{
        return 0 + contax(f, pos+1);
    }

}

int main() {
    int i, j, numerofrases, comprimento, contador=0;
    scanf("%d", &numerofrases);

    char frase[5000];

    for(i=0;i<numerofrases;i++){
        scanf(" %[^\n]s", &frase);
        printf("%d\n", contax(frase, 0));
    }
}
