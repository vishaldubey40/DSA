#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct  node* next;    
};
void likedlist(struct node* ptr){
    while(ptr!=NULL){
       printf("%d ",ptr->data);
    ptr=ptr->next;
    }
}
int main(){
    struct node*  head; 
     struct node*  third; 
      struct node*  second;  
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=second;
    second->data=43;
    second->next=third;
    third->data=23;
    third->next=NULL;
    likedlist(head);
}
