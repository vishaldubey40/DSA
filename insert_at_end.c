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
struct node* insertatend(struct node* head,int data){
struct node* ptr=(struct node *)malloc(sizeof(struct node));
struct node *p=head;
while(p->next!=NULL){
    p=p->next;
}
ptr->data=data;
ptr->next=NULL;
p->next=ptr;
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
    fourth->next=NULL;
    likedlist(head);
   head= insertatend(head,1);
    likedlist(head);
}
