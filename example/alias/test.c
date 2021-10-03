#include<stdio.h>
#include<stdlib.h>

int main(){
  long addr[2];
  char* p1=malloc(4);
  char* p2=malloc(4);
  addr[0]=(long)p1;
  addr[1]=(long)p2;
  free((char*)addr[0]);
  free((char*)addr[1]);
  return 0;
}
