#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct  node* next; 
    struct  node* prev; 
};
void likedlist(struct node* head){                    //doubly linkedlist 
    struct node* ptr=head;
    do{
       printf("%d ",ptr->data);
    ptr=ptr->prev;
    }while(ptr->prev!=NULL);
    
}


int main(){
    struct node*  head; 
     struct node*  third; 
      struct node*  second;  
       struct node*  fourth; 
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
     fourth=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=second;
    head->prev=NULL;
    second->data=43;
    second->prev=head;
    second->next=third;
    
    third->data=23;
    third->next=fourth;
    third->prev=second;
     fourth->data=83;
    fourth->next=NULL;
    fourth->prev=third;

    likedlist(fourth);


}
