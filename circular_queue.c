#include<stdio.h>
#include<stdlib.h>

struct queue{
    int f;
    int r;
    int *arr;
    int size;
};
int isfull(struct queue *q){
    if(q->f==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(struct queue *q){
    if(q->f==q->r){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue *q,int value){
    if(isfull(q)){
        printf("queue is full");
        
    }
    else{
        q->f=(q->f+1)%q->size;
        q->arr[q->f]=value;
    }
}
int dequeue(struct queue *q){
    if(isempty(q)){
        printf("queue is empty");
        
    }
    else{
        q->r=(q->r+1)%q->size;
        return q->arr[q->r];
    }
}
int main(){
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->size=10;
    q->f=-1;
    q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    enqueue(q,5);
    printf("%d",dequeue(q));
    if(isempty(q)){
        printf("empty");
    }
    return 0;
}
