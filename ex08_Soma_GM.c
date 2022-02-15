int soma (int n){

    if (n == 0)
        return 0;
    
    else
        return n + soma(n - 1); 
}

int main () {

    int rep, n;

    scanf("%d", &rep);

    while (rep--) {
        
        scanf("%d", &n);

        printf("%d\n", soma(n));
    }

    return 0;
}