# include<stdio.h>
# include<stdlib.h>
struct stack {
    int top;
    char *arr;
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
void push(struct stack *ptr,char value){
    if (isfull(ptr)){
        printf("stack is full");
        
    }
    else {
    ptr->top++;
    ptr->arr[ptr->top]=value;
    }
        
    }

char pop(struct stack *ptr){//we dont use void to return the removed value
    if (isempty(ptr)){
        printf("stack is empty");
        return -1;
    }
        
    else {
    char value= ptr->arr[ptr->top];
    ptr->top--;
    return value;
    }
}

int paranthesismatch(char *exp){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));//always allocate the memory for stack
    s->size=100;
    s->top=-1;
    s->arr=(char*)malloc(s->size*(sizeof(char)));
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
             push(s,'(');
            
        }
        else if(exp[i]==')'){
            if(isempty(s)){
                return 0;
            }
            pop(s);
        
    }
    }
    if (isempty(s)){
        return 1;
    }
    else {
        return 0;
    }

}


int main(){
    char *a="8*9(10+1)";
if(paranthesismatch(a)){
    printf("parenthesis are equal");
}
else{
    printf("parenthesis are not equal");
}

return 0;
}
    






