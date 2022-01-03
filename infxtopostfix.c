#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int* arr;
};
int stacktop(struct stack* sp){
    return sp->arr[sp->top];
}
int precidence(char s){
    if(s=='*'||s=='/')
    return 3;
    else if(s=='+'||s=='-')
    return 2;
    else return 0;
}
int isempty(struct stack *p){
    if(p->top==-1){
        return 1;
    }else 
    return 0;
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *p,char x){
    if(isfull(p)){
        printf("Stack is Full: ");
    }else{
        p->top++;
        p->arr[p->top]=x;
}
}
char pop(struct stack* ptr){
    if(isempty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int isoperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        return 1;
    }    else return 0;
    
}
char *infxtopos(char* infix){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(int*)malloc(sizeof(int));
    char* postfix=(char*)malloc((strlen(infix)-1)*sizeof(char));
    int i=0;
    int j=0;//i will track infix where as j for postfix
    while(infix[i]!=0)
    {
        if(!isoperator(infix[i])){
        postfix[j]=infix[i];
        j++;
        i++;
    }else{

        if(precidence(infix[i])>precidence(stacktop(sp))){
            push(sp,infix[i]);
            i++;
        }else{
            postfix[j]=pop(sp);
            j++;
        }
    }
}
while(!isempty(sp)){
    postfix[j]=pop(sp);
    j++;
}
postfix[j]='\0';
return postfix;
}

int main(){
 char *ch="3+5+2";
 printf("Postfix is %s:",infxtopos(ch));
 return 0;
}
