#include <bits/stdc++.h>
                              // finding sqrt using binary search
using namespace std;
double eps=1e-6;
double multiply(double mid, int n){
    double ans=1;
    for(int i=0 ;i<n ;i++){
        ans*=mid;
    }
    return ans;
}
int main() {
    double x;
    cin >> x;
    int n;
    cin >> n;
    double low = 1, high = x ,mid;
    while(high - low > eps ){
        mid = (high + low)/2;
        if( multiply(mid,n) < x){ //to find nth root of binary search created multiply fn
                                  //if want ot find only sqrt then replace fn with mid*mid
            low = mid;
        }else
        high = mid;
    }
    cout << low <<" "<< high << endl;
}
