#include <stdlib.h>
#include <stdio.h>


int ContarHi(char f[], int i){

    if (f[i] == 'h' && f[i+1] == 'i') {
        return 1 + ContarHi(f, i+1);
    } 
    
    else if (f[i] == '\0') {
        return 0;
    } 
    
    else {
        return 0 + ContarHi(f, i+1);
    }

}

int main() {

    int i, j, rep, comprimento, contador = 0;
    
    scanf("%d", &rep);

    char frase[5000];

    while (rep--) {

        fflush(stdin);
        gets(frase);

        printf("%d\n", ContarHi(frase, 0));
    }
}