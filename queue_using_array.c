#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int b,f;  //for front and back
    int *arr;
};
void enqueue(struct queue *p,int val){
    p->b++;
    p->arr[p->b]=val;
    }
    int dequeue(struct queue *ap){
        ap->f++;
        int val=ap->arr[ap->f];
        return val;
    }
int main() {
    struct queue *sp=(struct queue*)malloc(sizeof(struct queue));
    
    sp->size=100;
    sp->b=-1;
    sp->f=-1;
    sp->arr=(int *)malloc(sizeof(struct queue));
    enqueue(sp,23);
        enqueue(sp,73);
            enqueue(sp,24);
                enqueue(sp,2);
            int first= dequeue(sp);
   printf("%d",first);
   return 0;
}
