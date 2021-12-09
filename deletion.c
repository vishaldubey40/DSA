#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n){  //to display output
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}
int delete(int arr[],int size,int index){
        for(int i=index;i<=size-1;i++){
            arr[i]=arr[i+1];
        }
    
}
int main(){
    int a[100]={23,5,3,32,4,5};
    display(a,6);
    int size=6,index=3,element=24;

  delete(a,size,index);
display(a,5);

}
