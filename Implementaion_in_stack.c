#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int *arr;
    int size;
};
void isempty(struct stack s){
    if(s.top==-1){
        printf("Stack Is empty");
        
    }else
    printf("Stack is not empty");

}
// void isfull(){
//     if(top==size){
//         printf("stack is full");
//     }
// }
 int main() {
 struct stack s;
 s.size=80;
 s.top=-1;
 s.arr=(int *)malloc(s.size*sizeof(int));
//   struct stack *s=(struct stack *)malloc(sizeof(struct stack));
//   s->size=80;
//   s->top=-1;
//   s->arr=(int *)malloc(s->size*sizeof(int));
//checking staus of our stack

  //putting value in a stsack mannualy
  s.arr[0]=2;
  s.top++;
  isempty(s);
    
}
