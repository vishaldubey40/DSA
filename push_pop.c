#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int *arr;
    int size;
};

int isempty(struct stack *ptr){
    if(ptr->top==-1){
       printf("Stack is empty \n");
    }else
    return 0;
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else
    return 0;
}
void push(struct stack *ptr,int val){
    if(isfull(ptr)){
        printf("Stack is full %d is not inserted in stack\n",val);
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
void pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("Stack is empty\n");
    }else{
        printf("val=%d is removed from stack\n",ptr->arr[ptr->top]);
        ptr->top--;
    }
}

int main() {
    struct stack* s=(struct stack *)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=5;
    s->arr=(int *)malloc(s->size*sizeof(int));
    printf("Stack has been Created sucessfully\n");
    int n;
      scanf("%d",&n);
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        push(s,t);
    }
    push(s,7);
     
        
        pop(s);
        pop(s);pop(s);pop(s);
    
    pop(s);
    pop(s);
}
