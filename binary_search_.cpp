#include <iostream>

using namespace std;

int main() {
   int size;
   cin >> size;
   int arr[size];
   for(int i=0; i < size; i++){
       cin>>arr[i];
   }
   int to_find;
   cin >> to_find ;
   int low = 0;
   int high = size - 1;
   int mid ;//= (low + high)/2;
   while(high - low > 1){
       mid=(low + high)/2;
       if(arr[mid] < to_find){
           low=mid+1;
       }else
       high=mid;
   }
   if(arr[low] == to_find){
       cout << low <<endl;
   }else if(arr[high] ==  to_find){
       cout << high <<endl;
   }else
   cout << "Element not find." <<endl;
   
}
