#include <bits/stdc++.h>
// to find all the possible subset of a given array;
using namespace std;

vector<vector<int>> val;
void generate(vector<int> &subset,int i,vector<int> &nums){
    if(i == nums.size() ){
        val.push_back(subset);
        return;
    }
    generate(subset,i+1,nums);
    subset.push_back(nums[i]);
    generate(subset,i+1,nums);
    subset.pop_back();
    } 

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> empty;
    for(int i=0;i<n;i++){
    cin >> nums[i];
    }
    generate(empty,0,nums);
    for(auto it:val ){
        for(auto et:it){
        cout<<et<<" ";
    }cout<<endl;}
}
