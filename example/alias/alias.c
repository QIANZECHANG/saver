#include<stdio.h>
#include<stdlib.h>
struct mem{
  int* hid1;
  int* hid2;
};
int main(){
  struct mem sm1;
  //*sm1=malloc(sizeof(struct mem));
  sm1.hid1=malloc(sizeof(int));
  sm1.hid2=malloc(sizeof(int));
  //*sm1.hid2=20;
  //*sm1.hid1=10;
  //int *p=sm1.hid1+8;
  //printf("%d %d\n",*(&sm1)[0],*(&sm1)[1]);
  //printf("%d %p\n",**(&sm1.hid1+1),&sm1.hid1);
  //free(p);
  free(*(&sm1.hid1+1));
  //free(sm1.hid1);
  return 0;
}
