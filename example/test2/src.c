#include <stdio.h>

struct node{
  int v;
  struct node* next;
};

struct list{
  struct node* n;
  struct list* next;
}; 

struct node* new(int k, struct node* n){
  struct node* x=malloc(sizeof(*x));
  x->next=n;
  x->v=k;
  return x;
}

struct node* head;

void add(struct node* n){
  struct node* x=head;
  while(x->next!=NULL){
    x=x->next;
  }
  x->next=n;
}

void clean(struct node* l){
  if (l->next!=NULL)
    clean(l->next);
    free(l->next);
    l->next=NULL;
}

int main() { 
  head=malloc(sizeof(*head));
  head->next=NULL;
  struct node* n=NULL;
  struct node* x;
  struct node* t;
  for (int i=0;i<10;i++){
    //x=new(i,NULL);
    x=malloc(sizeof(*x));
    x->next=NULL;
    x->v=i;
    //printf("new %p\n",x);

    //add(x);
    
    t=head;
    while(t->next){
      t=t->next;
      printf("%d\n",t->v);
    }
    t->next=x;
    
    if(i==3){
      n=x;
      //printf("n=x\n");
      continue;
    }
    //if(n!=NULL)printf("%d\n",n->v);
    //if(i==5)clean(head);
    if(n==NULL||n->v){
      continue;      
    }

    //free(x);
    //printf("free %p\n",x);
  }
  //clean(head);
  //free(head);
  //head=NULL;
  return 0;
}
