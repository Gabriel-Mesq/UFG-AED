#include <stdio.h>;

int F_Ackermann (int m, int n){

  if (m == 0) 
    return n + 1;

  else if (n == 0 && m > 0)
    return F_Ackermann (m-1, 1);

  else if (n > 0 && m > 0)
    return F_Ackermann (m-1, F_Ackermann(m, n-1));
}

int main() {

  int m, n;

  scanf("%d %d", &m, &n);

  printf("%d\n", F_Ackermann(m, n));

  return 0;
}