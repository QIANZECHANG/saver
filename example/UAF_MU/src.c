#include <stdio.h>

int main() { 
  int c,v;
  int *p = malloc(4);
  *p = 5;
  //int tmp = *p;
  for (int i=0; i<10; i++){

    if (*p - i) 
      continue;
    else 
      free (p);
  }
  return 0;
}



