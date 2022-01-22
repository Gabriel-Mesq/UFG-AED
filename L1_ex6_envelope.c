int main() {

    int i, j, qnt, tipo, vet[9999], aux = 0, estepe;

    scanf("%d %d", &qnt, &tipo);

    for (i = 0; i < qnt; i++){

       scanf("%d", &vet[i]); 

    }

    estepe = qnt;

    for (i = 0; i < qnt; i++){

        for (j = 0; j < qnt; j++) {
    
            if ( vet[i] == vet[j] ) {

                aux++;

            }  
        }

        if (aux <= estepe) {
            estepe = aux;
        }
   
        aux = 0;
    }

    printf("%d", estepe);

  return 0;
}