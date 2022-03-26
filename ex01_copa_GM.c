#include <stdio.h>

int main() {
    
    int tamFila, tamDes, tam, i, j, k = 0, flag = 0;

    scanf("%d", &tamFila);
    
    int fila[tamFila];
    
    for (i =0; i < tamFila; i++){
        scanf("%d", &fila[i]);
    }

    scanf("%d", &tamDes);
    
    int des[tamDes];
    
    for (i =0; i < tamDes; i++){
        scanf("%d", &des[i]);
    }

    tam = tamFila - tamDes;

    int vet[tam];

    for (i =0; i < tamFila; i++){
        
        for (j =0; j < tamDes; j++){
        
            if (fila[i] == des[j])
                flag = 1;
        }
    
        if (flag == 0){
            vet[k] = fila[i];
            k++;
        }
    
        flag = 0;
    }

    for (i =0; i < tam; i++){
        printf("%d ", vet[i]);
    }    
    
    return 0;
}