//UFG, INF 2021-2
//Aluno Fillipe Mendonca Albuquerque
//AED1 pelo professor Thierson Couto Rosa
//Lista 2 Exercicio 12 Palindromo

#include <stdio.h>

int palin(char let[], int posi, int posf, int count, int pa){
    if(posi==0 && posf==0){
        return printf("PALINDROMO\n");
    } else if(posf%2==0 && count<(pa/2+pa%2)){
        if(let[posi]==let[posf]){
            return palin(let, posi+2, posf-2, count+1, pa);
        } else{
            return printf("NAO PALINDROMO\n");
        }
    } else if (posf%2==0 && count==(pa/2+pa%2)){
        if(let[posi]==let[posf]){
            return printf("PALINDROMO\n");
        } else{
            return printf("NAO PALINDROMO");
        }
    } else if(posf%2!=0 && count<pa/2){
        if(let[posi]==let[posf]){
            return palin(let, posi+2, posf-2, count+1, pa);
        } else{
            return printf("NAO PALINDROMO\n");
        }
    } else if(posf%2!=0 && count==pa/2){
        if(let[posi]==let[posf]){
            return printf("PALINDROMO\n");
        } else{
            return printf("NAO PALINDROMO");
        }
    } else{
        return printf("NAO PALINDROMO\n");
    }
}

int main() {
    int testes, i, num;
    scanf("%d", &testes);
    if(testes>0){
        for(i=0; i<testes; i++){
            scanf("%d", &num);
			//getchar(); para limpar o buffer
            if(num<=2000){
                char letras[2*num-1];
                scanf(" %[^\n]s", &letras);
				//getchar();
                //Limpar o buffer. O \n da primeira vez fica no buffer do scanf anterior. Sempre avaliar a leitura anterior.
				//letras, pos_i, pos_f, cont
                palin(letras, 0, 2*num-2, 0, num);
            }
        }
    }
}




