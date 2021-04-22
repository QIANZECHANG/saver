#include <stdio.h>

int main() {
  int *p=malloc(4);
  *p = 1;

  free(p); 

  *p+=1;
 
  return 0;
}
