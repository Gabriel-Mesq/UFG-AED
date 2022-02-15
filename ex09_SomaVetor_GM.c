int soma (int v[ ], int tam){

    if (tam == 0)
        return 0;

    else     
        return v[tam - 1] + soma(v, tam - 1); // chamada recursiva
}

int main () {

    int rep, tam, i;

    scanf("%d", &rep);

    while (rep--) {
        
        scanf("%d", &tam);
        
        int vet[tam];

        for (i = 0; i < tam; i++){
            scanf("%d", &vet[i]);
        }

        printf("%d\n", soma(vet, tam));
    }

    return 0;
}