#include <stdio.h>
#include <stdlib.h>

int main() {

    int n_inimigos, vet_inimigos[1000];
    int i, p, e, aux, estepe;
    char op;

    scanf("%d", &n_inimigos);

    for (i = 0; i < n_inimigos; i++){
        scanf("%d", &vet_inimigos[i]);
    }

    scanf(" %c", &op);
      
    while (op != 'F'){
       
        switch (op){
        
            case 'I':
                
                scanf("%d %d", &p, &e);        

                for (i = 0; i < n_inimigos; i++){
                
                    if (vet_inimigos[i] == e){
                        estepe = i;
                    }
                }

                n_inimigos++;

                for (i = n_inimigos; i > estepe + 1; i--){
                    
                    vet_inimigos[i] = vet_inimigos[i-1];     
                }

                vet_inimigos[estepe + 1] = p;
                printf("inserido %d\n", p);
                
            break;
            
            case 'R':

                scanf("%d", &p);        
                
                for (i = 0; i < n_inimigos; i++){
                
                    if (vet_inimigos[i] == p){
                        estepe = i;
                    }
                }

                for (i = estepe; i < n_inimigos; i++){
                    
                    vet_inimigos[i] = vet_inimigos[i+1];     
                }

                n_inimigos--;
                printf("removido %d\n", p);

            break;

            case 'C':

                scanf("%d %d", &e, &p);        
                
                for (i = 0; i < n_inimigos; i++){
                
                    if (vet_inimigos[i] == p){
                        estepe = i;
                    }
                }

                for (i = 0; i < n_inimigos; i++){
                
                    if (vet_inimigos[i] == e){
                        aux = i;
                    }
                }
            
                if (estepe > aux)
                    printf("quantidade %d\n", estepe - aux - 1);

                else printf("quantidade %d\n", aux - estepe - 1);

            break;

            case 'M':
                
                printf("lista ");    

                for (i = 0; i < n_inimigos; i++){
                            
                    printf("%d ", vet_inimigos[i]);             
                }
            
            break;
        }
                
        scanf(" %c", &op);
    }
    
    printf("fim\n");    
    return 0;
}