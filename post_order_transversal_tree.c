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
void postorder(struct node* root){
    if(root!=NULL){
    
    postorder(root->left);
    postorder(root->right);
        printf("%d",root->data);
}
}
int main() {
    struct node* p=createnode(4);
    struct node *p1=createnode(3);
  struct node *p2=createnode(9);
  struct node *p3=createnode(1);
  struct node *p4=createnode(5);
  struct node *p5=createnode(7);
    p->left=p1;                           //            4
    p->right=p2;                          //         3      9
    p1->left=p3;                           //      1   5    
    p1->right=p4;
    p2->right=p5;
    postorder(p);
}
