# include<stdio.h>
# include<stdlib.h>
# include<string.h>
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
        //("stack is empty");
        return -1;
    }
        
    else {
    char value= ptr->arr[ptr->top];
    ptr->top--;
    return value;
    }
}


char stacktop(struct stack *s){
    if(isempty(s)){
        return 0;
    }
    return s->arr[s->top];
  

}
int precendence(char ch){// 3 and 2 because it will be easier to campare them
    if(ch=='*'||ch=='/'){
        return 3;
    }
    else if(ch=='+'||ch=='-'){
        return 2;
    }
    else{
        return 0;
    }
}
int isoperator(char ch){
    if(ch=='*'||ch=='/'||ch=='+'||ch=='-'){
        return 1;
    }
    else{
        return 0;
    }
}
char* intopost(char * infix){
    
    struct stack* s=(struct stack *)malloc(sizeof(struct stack));//initiate stack
    s->size=100;
    s->top=-1;
    s->arr=(char*)malloc(s->size*(sizeof(char)));
    char * postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));//allocate the memory for postfix which is (ab-6t/+)
    int j=0;//for infix
    int i=0;//for postfix
    while(infix[i]!='\0'){
        if(!isoperator(infix[i])){//for eg a is not an operator
        postfix[j]=infix[i];//that char will go in postfix array
        j++;
        i++;
        }
            else{
                if(precendence(infix[i])>precendence(stacktop(s))){//precenate means associavity of oprends
                push(s,infix[i]);
                i++;
                }
                else{
                    postfix[j]=pop(s);
                    j++;
                }
            }
        }
        
            while(!isempty(s)){
            postfix[j]=pop(s);
            j++;
            }
            postfix[j]='\0';
            return postfix;
        }
        

int main(){
    char *a="a-b+t/6";
    printf("the postfix of equation is %s",intopost(a));



return 0;
}
    







