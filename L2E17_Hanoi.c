#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char O, char A, char D);
int main (void) {
    int discos;
    char aux='A';
    char dest='D';
    char origem='O';
    scanf("%d", &discos);
    if (discos<2)
        return 0;
    hanoi(discos, origem, aux, dest);
}
void hanoi(int n, char O, char A, char D) {
    if (n>=1) {
        hanoi(n-1, O, D, A);
        printf("(%c,%c)\n", O, D);
        hanoi (n-1, A, O, D);
    }
}