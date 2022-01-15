#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int a){
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=a;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void inorder(struct node* root){
    if(root!=NULL){
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
}
int isbst(struct node* r){
    static struct node* prev=NULL;
    if(r!=NULL){
    if(!isbst(r->left)){
    return 0;
    }
    if(prev!=NULL&&r->data <= prev-> data){
    return 0;
    }
    prev=r;
    return isbst(r->right);
    }else
    return 1;
}
int main() {
struct node* p=createnode(5);
struct node *p1=createnode(3);
struct node *p2=createnode(6);
struct node *p3=createnode(1);
struct node *p4=createnode(4);   //
 //struct node *p5=createnode(7);
p->left=p1;                           //            5
p->right=p2;                          //         3      6
p1->left=p3;                           //      1   4    
p1->right=p4;
  // p2->right=p5;
inorder(p);
printf("\n");
printf("%d",isbst(p));
}
