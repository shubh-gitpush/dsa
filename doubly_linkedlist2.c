#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
void transversal(struct node *head){
    struct node *p=head;
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}
    
void reverse(struct node *third){// it reads in reverse direction
    struct node *p=third;
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->prev;
}
}
int main (){
    struct node *head;
    struct node *second;
    struct node *third;
    head= (struct node *)malloc(sizeof(struct node));
    second= (struct node *)malloc(sizeof(struct node));
    third= (struct node *)malloc(sizeof(struct node));
    head->data=3;
    head->next=second;
    head->prev=NULL;
    second->data=5;
    second->next=third;
    second->prev=head;
    third->data=8;
    third->next=NULL;
    third->prev=second;
   transversal(head);
   reverse(third);
    return 0;

}