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
void pop(struct node** top){
    if(isempty(*top)){
        printf("Stack is empty: \n");
    }else
    {
       struct node* n=*top;
       *top=(*top)->next;
       int x=n->data;
       free(n);
       printf("\n%d element is removed ",x);
    }
}
struct node* push(struct node* top,int x){
    struct node* p=(struct node* )malloc(sizeof(struct node));
    if(isfull(top)){
        printf("Stack is Full");
    }else
    {
        p->data=x;
        p->next=top;
        top=p;
    }
    return top;
}

int main() {
    top=NULL;
  top=push(top,56);
  top=push(top,46);
  top=push(top,5);top=push(top,6);
    print(top);
    pop(&top);
   
   
   
}
