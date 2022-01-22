//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Exercicio 1 Cometa

#include <stdio.h>

int main()
{
    //Comenta Halley passa a cada 76 anos
    //Dado o ano atual, informa qual o próximo ano que o cometa sera visivel 
    //Se o ano digitado e o ano do cometa, considerar que ele ja passou e mostrar o ano seguinte
    //Considerar anos bissextos
    //Ano marco de passagem 1986

    int A, B;
    do{                                     //Digite o ano atual           
        scanf("%d", &A);                    //Verifica o limite dos numeros de entrada    
        if(A<0 || A > 10000){
            printf("Digite um valor entre 0 e 10000. \n");
        }
    }while(A<0 || A > 10000);
    if(A >= 1986){                          //Verifica o calculo para ano digitado alem do ano de sincronismo
        B = ((A-1986)/76)+1;        
        printf("%d \n", 1986+B*76-(((A-1986)/4)/365));
    }
    else{
        if((1986-A)%76==0){
            B = ((1986-A)/76)-1;    
        }
        else{
            B = ((1986-A)/76);              //Nao possui valor -1, pois ja mostra a data seguinte de passagem
        }        
        printf("%d \n", 1986-B*76-(((1986-A)/4)/365));
    }
}
