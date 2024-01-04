#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;//it means the it is true
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;//it means the it is true
    }
    else{
        return 0;
    }
}
int main(){
    //struct stack s{
       // s.data=80;
        //s.top=-1;
        //s.arr=(int *)malloc(s->size * sizeof(int)); or we can use arrow pointer
    
    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr=(int*)malloc(s->size * sizeof(int));
    //pushing an element in a stack
    s->arr[0]=5;
    s->top++;
    if (isempty(s))
    {// if it returns true then it will execute if statement
        printf("the stack is empty");
    }
    else 
    {
        printf("the stack is not empty");
    }

    return 0;
}

