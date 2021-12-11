#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct  node* next;    
};
void likedlist(struct node* head){                    //circular linkedlist 
    struct node* ptr=head;
    do{
       printf("%d ",ptr->data);
    ptr=ptr->next;
    }while(ptr!=head);
}
struct node* insertatfirst(struct node* head,int value){
struct node* ptr=(struct node *)malloc(sizeof(struct node));
struct node *p=head;
struct node *q=head->next;
while(q->next!=head){
    q=q->next;
    }
    //q at the lst element of linkedlist
    ptr->data=value;
    q->next=ptr;
    ptr->next=head;

head=ptr;
return head;
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
    second->data=43;
    second->next=third;
    third->data=23;
    third->next=fourth;
     fourth->data=83;
    fourth->next=head;
printf("before insertion: ");
    likedlist(head);
    printf("\n");
  head= insertatfirst(head,97);
    printf("After insertion: ");
    likedlist(head);
}
