#include <bits/stdc++.h>

using namespace std;
vector<string> val;
 void generate(string &s,int open,int close){
     if( open == 0 && close == 0 ){
         val.push_back(s);
         return;
     }
     if(open > 0){
         s.push_back('(');
         generate(s,open-1,close);
         s.pop_back();
     }
     if(close > 0){
         if(open < close){
         s.push_back(')');
         generate(s,open,close-1);
         s.pop_back();
         }
     }
    }

int main() {
    int No_pair ;
    cin >> No_pair;
    string s;
    generate(s,No_pair,No_pair);
    for(int i=0 ; i < val.size() ; i++){
        cout<<val[i]<<endl;
    }
    return 0;
}
