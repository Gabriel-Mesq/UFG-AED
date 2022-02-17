#include <stdio.h>

double Raiz (double x, double y, double e){

    double aux;

    aux = (y*y - x);
    if (aux < 0) aux *= -1;

    if ( aux < e ) {
        return y;
    }

    else {

        return Raiz(x, ((x/y)+y)/2, e);

    }

}

int main() {

    double x, e;

    scanf("%lf %lf", &x, &e);

    printf("%lf", Raiz(x, x/2, e));

  return 0;
}