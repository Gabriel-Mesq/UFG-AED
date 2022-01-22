int main() {

    int i, j, n, num, flag = 0, resto;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        
        scanf("%d", &num);

        for (j = 2; j < num; j++) {

            resto = num % j;

            if (resto == 0) {

                flag = 1;

            }

        }
   
        if (flag == 0) { 
        
            printf("S\n");
        
        }
        
        else if (flag == 1) { 
        
            printf("N\n");
        
        }
   
        flag = 0;
    }

  return 0;
}