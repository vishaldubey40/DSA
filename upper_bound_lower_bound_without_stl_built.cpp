#include <bits/stdc++.h>

using namespace std;

int lower_bound(vector<int> &v,int element){
    int low =0; 
    int high = v.size()-1;
    int mid;
    while(high - low >1){
        mid = (low + high ) / 2;
         if(v[mid] < element){
             low=mid+1;
         }else{
             high = mid;
         }
        
    }
    if(v[low] >= element){
        return low;
    }else if(v[high] >= element){
        return high;
    }
    return -1;
    
    
}
int upper_bound(vector<int> &v,int element){
    int low =0; 
    int high = v.size()-1;
    int mid;
    while(high - low >1){
        mid = (low + high ) / 2;
         if(v[mid] <= element){
             low=mid+1;
         }else{
             high = mid;
         }
        
    }
    if(v[low] > element){
        return low;
    }else if(v[high] > element){
        return high;
    }
    return -1;
    
    
}

int main() {
    int size;
    cin >> size;
 vector<int> v(size);
 for(int i=0;i< size ;i++){
     cin >> v[i] ;
 }
 sort(v.begin(),v.end());
 int element ;
 cin >> element ;
 int k=lower_bound(v,element);
 cout << " value present at that index id is: " << k << " the value of lower bound is: "<< v[k] << endl ;
 int j=upper_bound(v,element);
 cout << " value present at upper bound index is: " << j << " the value of upper bound is: "<< v[j];
}
