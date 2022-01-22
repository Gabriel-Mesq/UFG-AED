//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Exercicio 2 Jose

#include <stdio.h>

int main() {
    //Jose e irmao mais novo de Joao
    //Comparar dois numeros de tres digitos
    //A comparacao utiliza o digito mais significativo da direita
    //Entrada uma linha com dois numeros de tres digitos
    //Os numeros nao serao igual e nao conterao zeros
    //Comparar numeros invertidos CDU para UDC

    char num[7];
    int C1, D1, U1, C2, D2, U2;
    fgets(num, 8, stdin);                                //Inserir numero de figuras 
    C1 = num[0]-'0';
    D1 = num[1]-'0';
    U1 = num[2]-'0';
    C2 = num[4]-'0';
    D2 = num[5]-'0';
    U2 = num[6]-'0';
    if(U1 > U2){
        printf("%d%d%d \n", U1, D1, C1);
    } else if(D1 > D2){
        printf("%d%d%d \n", U1, D1, C1);
    } else if(C1 > C2){
        printf("%d%d%d \n", U1, D1, C1);
    } else {    
        printf("%d%d%d \n", U2, D2, C2);
    }
    return 0;
}