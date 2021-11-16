#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){
    int n,count=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   int i;
    for(i=0;i<n;i++){
        cin>>b[i];
    }   sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(int i=0;i<n;i++){
            if(a[i]%b[i]==0||b[i]%a[i]==0){
                count++;
}  }
    cout<<count<<endl;
}	return 0;
}
