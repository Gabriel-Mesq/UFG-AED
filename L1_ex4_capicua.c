int main() {

    int i, n, m, c, d, u;

    scanf("%d", &i);

    while (i--) {
        
        scanf("%d", &n);

        m = n/1000;
        c = (n - m*1000)/100;
        d = (n - m*1000 - c*100)/10;
        u = (n - m*1000 - c*100- d*10);

        if ( (m == u) && (c == d) ) {
            printf("S\n");
        }

        else printf("N\n");

    }
    
  return 0;
}