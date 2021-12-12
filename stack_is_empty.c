#include<stdio.h>
#include<stdlib.h>

//stack using an array
struct stack {
    int size;
    int top;
    int *arr;
};
//check stack is empty
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else
    {
        return 0;
    }
}
//check stack is full
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {
  struct stack *s= (struct stack*)malloc(sizeof(struct stack));
  s->size=80;
  s->top=-1;
  
  s->arr=(int*) malloc(s->size  * sizeof(int));
  
  if(isempty(s)){
      printf("stack is empty\n");
  }else
  printf("stack is not empty");
  return 0;
}
