#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head;
void insert(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
      struct node*p= head;
      temp->data=data;
      temp->next=NULL;
//       if(head!=NULL)
//      temp->next=head;
// head=temp;
if(head!=NULL)
temp->next=head;
head=temp;
        
    
}

void print(){
    int count=0,g;
    scanf("%d",&g);
    struct node* p=head;
    printf("Linked list:");
    while(p!=NULL){
        if(p->data==g){
            count++;
        }
        printf("->%d",p->data);
        p=p->next;
    }
    printf("\nCount of %d:%d ",g,count);
}

int main(){
    head=NULL;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int r;
        scanf("%d",&r);
        insert(r);
    }
    print();
}
