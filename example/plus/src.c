#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int *p, *q;
  int i=atoi(argv[1]);
  int j=atoi(argv[2]);
  
  p = malloc(1); // o1
  if (i+j<5)
    q = p;
  else
    q = malloc(2); // o2
  
  *q = 1;
  free(q);
  
  //if (args[0]+args[1] < 5) free(p);
  return 0; // o1 leaks here
}




