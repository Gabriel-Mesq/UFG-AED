int main() {

  int ca, da, ua;
  int cb, db, ub;
  int A, B;

  scanf("%d %d", &A, &B);

  ca = (A/100);
  da = (A - ca*100)/10;
  ua = (A - ca*100 - da*10);

  cb = (B/100);
  db = (B - cb*100)/10;
  ub = (B - cb*100 - db*10);

  if (ua > ub) printf("%d%d%d", ua, da, ca);
  
  else printf("%d%d%d", ub, db, cb);

  return 0;
}