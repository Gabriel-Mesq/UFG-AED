int main() {

    int n_pedras, n_sapos, po_inicial, dist_pulo, i, vet[50], aux;
    
    scanf("%d %d", &n_pedras, &n_sapos);

    for (i = 0; i < n_pedras; i++) {

        vet[i] = 0;

    }

    for (i = 0; i < n_sapos; i++) {

        scanf("%d %d", &po_inicial, &dist_pulo);

        vet[po_inicial-1] = 1;

        aux = (po_inicial-1) + dist_pulo;

        while (aux < n_pedras) {
            
            if ( aux < n_pedras) {

                vet[aux] = 1;
                aux = aux + dist_pulo;

            }
            
        } 
        
        aux = (po_inicial-1) - dist_pulo;

        while (aux >= 0) {
            
            if ( aux >= 0) {

                vet[aux] = 1;
                aux = aux - dist_pulo;

            }
            
        } 
        
    }

    for (i = 0; i < n_pedras; i++) {

        printf("%d\n", vet[i]);

    }
    
    return 0;
}