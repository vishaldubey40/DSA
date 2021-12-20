#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char *arr;
};

int isempty(struct stack *p){
    if(p->top==-1){
        return 1;
    }else 
    return 0;
}
int isfull(struct stack *p){
    if(p->top==p->size-1)
{ return 1;}
else
return 0;
}
void push(struct stack *p,char x){
    if(isfull(p)){
        printf("Stack is Full: ");
    }else{
        p->top++;
        p->arr[p->top]=x;
}
}
char pop(struct stack* p){
   if(p->top==-1){
      printf("Stack is empty: \n");
   }else{
       
    p->top--;
}
}
int paranthesismatch(char *exp){
struct stack *s;

s=(struct stack*)malloc(sizeof(struct stack));
s->top=-1;
s->size=100;
s->arr=(char *)malloc(s->size*sizeof(char));
    int i;
    for(i=0; exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(s,'(');
        }else if(exp[i]==')'){
            if(isempty(s)){
                return 0;
            }
            pop(s);
        }
    }
    if(isempty(s)){
        return 1;
    }else return 0;
}

int main() {
//paranthesis
char *exp="3*)9(";
if(paranthesismatch(exp)){
    printf("Paranthesis is Matched :");
}else
{
     printf("Paranthesis is Not Matched :");
}
}
