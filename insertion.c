#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}
int insert(int arr[],int s,int c,int in,int element){
    if(s>=c){
        return -1;
    }else{
        for(int i=s-1;i>=in;i--){
            arr[i+1]=arr[i];
        }
        arr[in]=element;
    }
}
int main(){
    int a[100]={23,5,3,32,4,5};
    display(a,6);
    int size=6,index=3,element=24;

  insert(a,size,100,index,element);
display(a,7);

}
