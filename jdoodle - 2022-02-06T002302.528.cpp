#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
  if (n < 2) return false;
  int iter = 2;
  while(iter <= sqrt(n)) {
  	if (n % iter == 0) return false;
    iter++;
  }
  return true;
}

int main() {
   long long int n;
   cin >> n;
   vector<long long int> v(n);
   for( int i=0 ; i<n;i++){
       cin >> v[i];
   }
   for(int i=0;i<n;i++){
       long long int k=sqrt(v[i]);
       if(k*k==v[i]){
           if(isPrime(k)){
               cout << "YES" <<endl;
           }else
           cout<<"NO"<<endl;
       }else
       cout<<"NO"<<endl;
   }
}