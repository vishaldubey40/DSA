#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int size;
    char *arr;
};

int isempty(struct stack *p){
    if(p->top==-1){
        return 1;
    }else
    return 0;
}
int isfull(struct stack *p){
     if(p->top==p->size-1){
        return 1;
    }else
    return 0;
}
int push(struct stack* sp,char ch){
    if(isfull(sp)){
        printf("Stack is overflow:");
    }else{
        sp->top++;
       sp->arr[sp->top]=ch;
    }
}
char pop(struct stack* p){
   if(isempty(p)){
      printf("Stack is empty: \n");
   }else{
       char val=p->arr[p->top];
    p->top--;
    return val;
}
}
int match(char a,char b){
    if(a=='('&&b==')'){
        return 1;
    }if(a=='{'&&b=='}'){
        return 1;}
        if(a=='['&&b==']'){
        return 1;
    }
    return 0;
}
int paranthesismatch(char *exp){
struct stack *s;
char ch;
s=(struct stack*)malloc(sizeof(struct stack));
s->top=-1;
s->size=100;
s->arr=(char *)malloc(s->size*sizeof(char));
    int i;
    for(i=0; exp[i]!='\0';i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
            push(s,exp[i]);
        }else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(isempty(s)){
                return 0;
            } 
          ch= pop(s);
         if(!match(ch,exp[i])){
             return 0;
         }
    }
    }
     
    if(isempty(s)){
        return 1;
    }
    else{
        return 0;
    }

}
int main() {
char *e="[{5(4)}]";
if(paranthesismatch(e)){
    printf("Paranthesis is balanced");
}else
{
printf("Paranthesis is not balanced ");
}
}
