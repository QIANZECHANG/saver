#include <stdio.h>

struct node{
  int v;
  struct node* next;
};

struct node* new(int k, struct node* n){
  struct node* x=malloc(sizeof(*x));
  x->next=n;
  x->v=k;
  return x;
}

int main() { 
  struct node* x=new(0,NULL);
  return 0;
}



