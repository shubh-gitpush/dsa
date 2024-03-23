#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
void transversal(struct node *ptr){
    while(ptr->next!=NULL){
        printf("%d\n",ptr->data);
       ptr=ptr->next;
    }
}
int isfull(struct node *ptr){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(struct node *ptr){
    if (ptr==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
    struct node *push(struct node *top,int x){
        if(isfull(top)){
            printf("stack os overflow");
        }
        else{
            struct node *n=(struct node*)malloc(sizeof(struct node));
            n->next=top;
            top=n;
            n->data=x;
            return top;
        }
    }
int stackbottom(struct node* ptr){
        if(isempty(ptr)){
            //printf("stack is underflow");
        }
        else{
            struct node *p=ptr;
            while(p->next!=NULL){
                p=p->next;
            }
        return p->data;
       }
    }
    int stacktop(struct node *top){
        return top->data;
    }
int pop(struct node **top){
    if(isempty(*top)){
        printf("stack is underflow");
    }
    else{
        struct node *p=*top;
        *top=(*top)->next;
        int x=p->data;
        free(p);
        return x;
    }
}
int peek (int pos,struct node *p){
    int i;
    struct node *ptr=p;
        for(i=0;i<pos-1&&ptr!=NULL;i++)
        {
            ptr=ptr->next;
        }
        if(ptr!=NULL){
            return ptr->data;
        }
        else
        {
            return -1;
        }
    }

int main(){
    struct node *top=NULL;
    top=push(top,78);
    top=push(top,84);
    top=push(top,58);
    top=push(top,54);
    //int element =pop(&top);
    //printf("removed element is %d\n",element);
    //transversal(top);
    //stackbottom(top);
    printf("stackbottom %d",stackbottom(top));
    printf("stacktop %d",stacktop(top));
    printf("value at pos 3 %d\n",peek(3,top));
    transversal(top);
   
   
return 0;
}

