#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head;
void insert(int k){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=k;
    ptr->next=NULL;
    if(ptr!=NULL)
    ptr->next=head;
    head=ptr;
}
void print(struct node* ptr){
    printf("Linked list:");
   
    while(ptr!=NULL){
        printf("-->");
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
     printf("\n");
}
int GetNth(struct node* head,int index)
{
    int i=1;
    while(i!=index){
        head=head->next;
        i++;
    }
    printf("Node at index=%d:%d",index,head->data);
    return 0;
    
}
int main(){
    head=NULL;
    int t,a,i;
    scanf("%d",&t);
    for( i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        insert(n);
    }
    scanf("%d",&a);
    print(head);
    GetNth(head,a);
   return 0;
}
