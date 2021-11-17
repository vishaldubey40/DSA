#include <bits/stdc++.h>
using namespace std;
int main()
{  int q;
cin>>q;
while(q--){
    int a,b,count=0;
    float k;
    int j;
    cin>>a>>b;
    
    for(int i=a;i<=b;i++){
        k=sqrt(i);
        j=sqrt(i);
        if(k==j){
            count++;
        }
    }
    cout<<count<<endl;
}

	return 0;
}
