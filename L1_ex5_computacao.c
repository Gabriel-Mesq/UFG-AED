#include<stdio.h>    
#include<stdlib.h>  

int main(){  

  int resto[50], n, i, num;

  scanf("%d", &num);    

  while (num--){

    scanf("%d", &n);    

    for (i = 0; n > 0; i++){    
    
      resto[i] = n%4;    
    
      n = n/4;    
    
    }    

    for (i = i - 1; i >= 0; i--) {    
    
      printf("%d", resto[i]);    
    
    }    
  
    printf("\n");

  }
  
  return 0;  
}  