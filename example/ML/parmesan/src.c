#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p, *q;
  int i;

  p = malloc(1); // o1
  if (i)
    q = p;
  else
    q = malloc(2); // o2

  *q = 1;
  free(q);
  //if (i == 0) free(p);
  return 0; // o1 leaks here
}
