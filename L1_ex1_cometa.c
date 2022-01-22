int main() {

  int anoatual, resto, aux;

  scanf("%d", &anoatual);

  resto = ( ( anoatual - 1986 ) % 76 );
  aux = anoatual + (76 - resto);

  printf("%d", aux);

  return 0;
}