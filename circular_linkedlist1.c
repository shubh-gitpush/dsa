/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct node {
    struct node*next;
    int data;
};
void linktransversal(struct node *head){
    struct node *p=head;
    printf("%d\n",p->data);
    p=p->next;
    while (p!=head)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
struct node *insert(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head->next;
    while (p->next!=head){
        p=p->next;//reaches at the end node
    }
    p->next=ptr;//now points to the node you have just made
    ptr->next=head;//points to the original head
    head=ptr;//new head
    return head;
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
     head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=5;
    third->next=fourth;
    fourth->data=7;
    fourth->next=head;
    head=insert(head,9);
    linktransversal(head);
    


    return 0;
}
