#include<stdio.h>
#include<Stdlib.h>
struct node{
  int data;
  struct node *next;

}; 
 struct node *f=NULL;
struct node *r=NULL;
void transversal(struct node *q){
    //int i;
    while(q!=NULL){
        printf("\n%d",q->data);
        q=q->next;
    }
}
void enqueue(int value){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL){
        printf("overflow");
    }
    else{
           n->data=value;
           n->next=NULL;
           if(f==NULL){
            f=r=n;
            
           }
        
        else{
       
        r->next=n;
        r=n;
        }
    }
    }
    int dequeue(struct node *f){
        int value;
    struct node *n=f;
    if(f==NULL){
        printf("empty");
    }
    else{
           value=n->data;
           f=f->next;
           free(n);
           return value;
    }
    }


int main(){
   
    
    enqueue(34);
    enqueue(24);
    enqueue(3);
    enqueue(14);
    transversal(f);
    printf("\n%d has been removed",dequeue(f));
    return 0;
}