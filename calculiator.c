#include <math.h>
#include <stdio.h>

int main() {

  int x = 10;
  int y = 3;
  printf("%d\n", x + y); // 13
  printf("%d\n", x - y); // 7
  printf("%d\n", x * y); // 30
  printf("%d\n", x / y); // 3
  printf("%d\n", x % y);

  // if use math.h
  printf("%f\n", sqrt(x));
  printf("%f\n", ceil(x));
  printf("%f\n", floor(x));
  return 0;
}