#include<stdio.h>
int main(){
  int a;
  long long int b;
  double c;
  char d;
  scanf("%d %lld %lf %c", &a, &b, &c, &d);
  printf("%d\n%lld\n%lf\n%c\n", a, b, c, d);
}