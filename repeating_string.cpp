#include<bits/stdc++.h>

using namespace std;

#define ll int long long

int main()

{

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--)

    {

        int flag = 0,a[26]={0};

        string str;

        cin>>str;

        for(int i=0;i<str.length();++i)

        {

           ++a[str[i]-'a'];

        }

        for(int i=0;i<26;++i)

        {   

            if(a[i]>=2)

            {

                flag=1;

            }

        }

        if(flag==1)

        {

            cout<<"Yes"<<"\n";

        }else

        {

            cout<<"No"<<"\n";

        }

    }

    return 0;

}
