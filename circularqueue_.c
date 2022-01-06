#include<stdio.h>
#include <stdlib.h>
#include<string.h>
struct circularqueue{
    int size;
    int f,r;
    int *arr;
};
int isfull(struct circularqueue * sp){
    if((sp->r+1)%sp->size==sp->f)
    return 1;
    else return 0;
}
int isempty(struct circularqueue *sp){
    if(sp->f==sp->r)
    return 1;
    else return 0;
}

void enqueue(struct circularqueue *sp,int val){
    if(isfull(sp)){
        printf("Circularqueue is full:\n");
    }else
    {
        sp->r++;
        sp->arr[sp->r]=val;
    }
    }
    int dequeue(struct circularqueue *sp){
        if(isempty(sp)){
            printf("Circularqueue is empty");
        }else
        {
            sp->f++;
            int val=sp->arr[sp->f];
            return val;
        }
    }
    int main() {
    struct circularqueue* sp;
    sp=(struct circularqueue*)malloc(sizeof(struct circularqueue));
    sp->size=4;
    sp->f=0;
    sp->r=0;
    sp->arr=(int *)malloc(sizeof(int));
    enqueue(sp,23);
    enqueue(sp,2);
    enqueue(sp,3);
    dequeue(sp);
    dequeue(sp);
int    k=dequeue(sp);
   printf("%d\n",k);
   dequeue(sp);
        enqueue(sp,43);
         k=dequeue(sp);
   printf("%d\n",k);
        
}
