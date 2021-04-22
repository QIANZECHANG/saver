#include <stdio.h>

void *foo() {
  int *q = malloc(4);

  free(q);//delete
  return q;
}

int main() {
  int *p;
  p = foo();

  free(p);

  return 0;
}
