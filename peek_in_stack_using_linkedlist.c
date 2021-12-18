#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* top;
int isempty(struct node* top){
    if(top==NULL){
        return 1;
    }else
    return 0;
}
int isfull(struct node* top){
    struct node* p =(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }else
    return 0;
}
void print(struct node* p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
void pop(){
    if(isempty(top)){
        printf("Stack is empty: \n");
    }else
    {
       struct node* n=top;
       top=(top)->next;
       int x=n->data;
       free(n);
       printf("\n%d element is removed ",x);
    }
}
void push(int x){
    struct node* p=(struct node* )malloc(sizeof(struct node));
    if(isfull(top)){
        printf("Stack is Full");
    }else
    {
        p->data=x;
        p->next=top;
        top=p;
    }
  //  return top;
}

int peek(int index){
    int i;
    struct node* p=top;
    for(i=0;(i<index-1&&p!=NULL);i++)
    p=p->next;
    if(p!=NULL)
    printf("the element is %d",p->data);
    else return -1;
}

int main() {
    top=NULL;
  push(56);
  push(46);
  push(5);push(6);
    print(top);
    pop();
   peek(2);
   
   
}
