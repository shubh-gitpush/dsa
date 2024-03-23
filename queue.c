#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int r;
    int f;
    int *arr;
};
int isempty(struct queue *q){
    if(q->f==q->r){
        printf("stack is empty");
        return 1;
        
    }
    else{
        return 0;
    }

}
int isfull(struct queue *q){
    if(q->f==q->size-1){
        printf("stack is full");
        return 1;
        
    }
    else{
        return 0;
    }
}

int enqueue(struct queue *q,int value){
    if(isfull(q)){
        return -1;
    } 
    else{
        q->r=q->r+1;
        q->arr[q->r]=value;
        return value;
    }
}
int dequeue(struct queue *q){
    int a;
    if(isempty(q)){
        return -1;
    }
    else{
        q->f=q->f+1;
        a=q->arr[q->f];
        return a;
    }
}
int main(){
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->size=20;
    q->f=-1;
    q->r=q->f;
    q->arr=(int *)malloc(q->size*sizeof(int));
    isempty(q);
    enqueue(q,2);
    printf("\ndequeing element %d",dequeue(q));
    isempty(q);
    return 0;

}