
# include<stdio.h>
# include<stdlib.h>
struct stack {
    int top;
    int *arr;
    int size;
};
int isempty(struct stack *ptr){
    if (ptr->top==-1){
        //printf("stack is underflow");
        return 1;
    }
    else {
        return 0;
    }
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        //printf("stack is full");
        return 1;
    }
    else {
        return 0;
    }
}
void push(struct stack *ptr,int value){
    if (isfull(ptr)){
        printf("stack is full");
        
    }
    else {
    ptr->top++;
    ptr->arr[ptr->top]=value;
    }
        
    }
int pop(struct stack *ptr){//we dont use void to return the removed value
    if (isempty(ptr)){
        printf("stack is empty");
        return -1;
    }
        
    else {
    int value= ptr->arr[ptr->top];
    ptr->top--;
    return value;
    }
        
    }
int peek(struct stack *ptr,int i){//helps to tell the position of element in the stack
    if(ptr->top-i+1<0){
            printf("operation is invalid");
            return -1;
        }
    else{
            ptr->arr[ptr->top-i+1];
            return 0;
        }
    }

int main(){
int j;
struct stack *s=(struct stack*)malloc(sizeof(int));//to form a structure of stack
s->size=10;
s->top=-1;
s->arr=(int *)malloc(s->size * sizeof(int));
printf("%d\n",isempty(s));
printf("%d\n",isfull(s));
push(s,2);
push(s,3);
push(s,56);
push(s,77);
push(s,43);
push(s,9);
push(s,8);
push(s,87);
push(s,50);
push(s,59);//10 elements pushed succesfully 
push(s,5);// stack will overflow after that and cant store any more data
pop(s);
printf("%d\n",isempty(s));
printf("%d\n",isfull(s));

printf("%d ha been removed from the stack",pop(s));
for(j=0;j<=s->size;j++){
    printf("\nthe valie of %d stack is %d",j,peek(s,j));//it will give value in last in first out(LIFO)
}
return 0;
}