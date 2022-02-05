#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(vector<int> &nums){
    int k = nums.size();
    int subset_ct = (1<<k);
    vector<vector<int>> substs;
    for(int mask=0 ; mask < subset_ct; mask++){
            vector<int> subset;
            for(int i=0 ;i < k;i++){
            if( (mask & (1<<i)) !=0){
              subset.push_back(nums[i]);
          }
      }
      substs.push_back(subset);
}    return substs ;
    }
int main() {
   int n;
   cin >> n;
   vector<int> v(n);
   for(int i=0 ;i<n;i++){
       cin >> v[i];
       
   }
   auto sub=subsets(v);
   for(auto m:sub){
       for(auto p:m){
           cout << p <<" ";
       }
       cout <<endl;
   }
}
