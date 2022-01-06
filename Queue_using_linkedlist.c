#include<stdio.h>
#include<stdlib.h>
    struct node *f=NULL;
    struct node *r=NULL;
struct node{
    int data;
    struct node* next;
};
void enqueue(int val){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        printf("queue is full ");
    }else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }else{
            r->next=n;
            r=n;
        }
    }
    
}
int dequeue(struct node* f){
    int val=-1;
    struct node *n=f;
    if(f==NULL){
        printf("queue is empty ");
    }else{
        f=f->next;
        val=n->data;
        free(n);
        
        }
    
    return val;
}
void display(struct node* u){
    printf("Element of linkedlist :\n");
    while(u!=NULL){
        printf("%d ",u->data);
    u=u->next;
    }
}
int main() {
    display(f);
    enqueue(34);
        enqueue(3);
            enqueue(4);
                enqueue(67);
                display(f);
              int k= dequeue(f);
              printf("%d",k);
}
