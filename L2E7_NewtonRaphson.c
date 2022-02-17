//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 7 Newton-Raphson

#include <stdio.h>
#include <math.h>

double f(double x1, double x2, double e){
    if((pow(x2,2)-x1)<0 && (-1*(pow(x2,2)-x1))<e){
        return x2;
    } else if((pow(x2,2)-x1)>0 && (pow(x2,2)-x1)<e){
            return x2;
    } else{
        return f(x1, ((x1/x2)+x2)/2, e);
    }
}


int main() {
    double x, erro;
    scanf("%lf %lf", &x, &erro);
    if(x>0 && erro>0){
        printf("%.6f\n", f(x, x/2, erro));
    }
}
