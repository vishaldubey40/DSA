#include<stdio.h>
#include<stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++){
          scanf("%d",&a[i]);
    }
    for(int i=1;i<=t-1;i++){
        int k=a[i],j=i-1;
        while(a[j]>k&&i>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
       for(int i=0;i<t;i++){
          printf("%d",a[i]);
    }
}
