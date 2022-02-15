#include <stdio.h>

void ImprimeNat (int n, int c){

    if (c < n){
        printf("%d ", ++c);
        ImprimeNat(n, c);
    }
}

int main() {

    int n;

    scanf("%d", &n);

    ImprimeNat(n, 0);

  return 0;
}