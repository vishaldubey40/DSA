#include<stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node* left;
    struct node* right;
    int height;
};
 int max(int a,int b){
    return (a<b)?b:a;
 }
int get_height(struct node* n){
   if(n==NULL)
   return 0;
   return n->height;
}
struct node* createnode(int key){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->key=key;
    n->right=NULL;
    n->left=NULL;
    n->height=1;
    return n;
}
int get_balancefactor(struct node* n){
    if(n==NULL)
    return 0;
    return get_height(n->left)-get_height(n->right);
}
struct node* right_rotate(struct node* y){
    struct node* x=y->left;
    struct node* t2=x->right;
    x->right=y;
    y->left=t2;
    x->height= max( get_height(x->right) , get_height(x->left) )+1;
    y->height= max( get_height(y->right), get_height(y->left) )+1;
    return x;
}

struct node* left_rotate(struct node* x){
    struct node* y=x->right;
    struct node* t2=y->left;
    y->left=x;
    x->right=t2;
    x->height= max( get_height(x->right) , get_height(x->left) )+1;
    y->height= max( get_height(y->right), get_height(y->left) )+1;
    return y;
}
struct node* insertion(struct node* n,int key){
    if(n==NULL)
    return createnode(key);
    if(key < n->key)
    n->left=insertion(n->left,key);
    else if(key > n->key)
    n->right=insertion(n->right,key);
    
    n->height=1+ max(get_height(n->left),get_height(n->right));
    int bf=get_balancefactor(n);
//left left rotation
    if( bf > 1 && key < n->left->key)
    return right_rotate(n); 
//right right rotation
    if( bf<-1 && key > n->right->key)
    return left_rotate(n);
//left right rotation
    if(bf>1 && key > n->left->key){
    n->left=left_rotate(n->left);
    return right_rotate(n);
}
//right left rotation
    if(bf < -1 && key <n->right->key){
    n->right=right_rotate(n->right);
    return left_rotate(n);
}
return n;
}
void preorder(struct node* n){
    if(n!=NULL){
        printf("%d ",n->key);
        preorder(n->left);
        preorder(n->right);
        }
}
int main(){
       struct node* root=NULL;
       root = insertion(root,1);
       root = insertion(root,2);
       root = insertion(root,4);
       root = insertion(root,5);
       root = insertion(root,6);
       root = insertion(root,3);
       preorder(root);
       return 0;
}
