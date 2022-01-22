//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Exercicio 10 Areas

#include <stdio.h>
#include <math.h>
#define pi 3.1416

int main() {
    //Calcular areas, em metros quadrados, de diversas figuras planas
    //Circulo C de raio R
    //Elipse E de raios maior R e menor r
    //Triangulo T de lados a, b, c, nessa ordem
    //Trapezio Z de base maior B, base menor b e altura H
    //pi = 3.1416

    int N, i;                                       //Quantidade de figuras planas
    char figura;                                    //Identificacao das figuras
    double Area, R, r1, p, a, b, c, B, H;           //Variaveis das formulas de area
    scanf("%d", &N);                                //Inserir numero de figuras 
    if(N<1){
    } else{
        for(i=1;i<=N;i++){
            getchar();
            scanf("%c", &figura);
            if(figura == 'C'){
                scanf("%lf", &R);
                Area = pi*pow(R, 2);
            } else if(figura == 'E'){
                scanf("%lf%lf", &R, &r1);
                Area = pi*R*r1;
            } else if(figura == 'T'){
                scanf("%lf %lf %lf", &a, &b, &c);
                p = (a+b+c)/2;
                Area = sqrt(p*(p-a)*(p-b)*(p-c));
            } else if(figura == 'Z'){
                scanf("%lf %lf %lf", &B, &b, &H);
                Area = ((B+b)*H)/2;
            }
            printf("%.4f", Area);
            printf("\n");
        }
    }
    return 0;
}