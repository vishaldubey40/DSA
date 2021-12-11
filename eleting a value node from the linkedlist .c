#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct  node* next;    
};
void likedlist(struct node* ptr){                    //deleting a value node from the linkedlist 
    while(ptr!=NULL){
       printf("%d ",ptr->data);
    ptr=ptr->next;
    }
}
struct node* deletevalue(struct node* head,int value){
struct node* ptr=(struct node *)malloc(sizeof(struct node));
struct node *p=head;
struct node *q=head->next;
while(q->data!=value&&q->next!=NULL){
    p=p->next;
    q=q->next;
    }
    if(q->data==value){
    p->next=q->next;
free(q);
}
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
     printf("before deletion: ");
    likedlist(head);
    printf("\n");
   head= deletevalue(head,23);
    printf("After deletion: ");
    likedlist(head);
}
