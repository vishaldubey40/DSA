#include<stdio.h>
#include<stdlib.h>

struct myarray{
    int total_size;
    int used_size;
    int *ptr;
};
void createarary(struct myarray *a,int tsize,int usize){
    (*a).total_size=tsize;
    (*a).used_size=usize;
    (*a).ptr=(int*)malloc(tsize * sizeof(int));
}
void show(struct myarray *a){
    for(int i=0;i< a->used_size;i++){
        printf("%d\n",((a->ptr)[i]));
    }
}
void setvalue(struct myarray *a){
     int n;
for(int i=0;i< a->used_size;i++){
      
       printf("Enter the value of %d ", i);
        scanf("%d",&n);
        ((a->ptr)[i])=n;
    }
}
int main(){
struct myarray marks;
createarary(&marks,10,4);
setvalue(&marks);
show(&marks);

}
