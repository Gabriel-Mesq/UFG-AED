int main() {

    int n, p, q, aux;
    char c;

    scanf("%d", &n);
    scanf("%d", &p);
    scanf(" %c", &c);
    scanf("%d", &q);

    if (c == '+') {

        aux = p + q;

        if (aux > n) {
            printf("OVERFLOW");
        }

        else printf("OK");
    }

    if (c == '*') {

        aux = p * q;

        if (aux > n) {
            printf("OVERFLOW");
        }

        else printf("OK");
    }

  return 0;
}