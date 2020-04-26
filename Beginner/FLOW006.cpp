#include<bits/stdc++.h>

using namespace std;
#define ll long long int
 int main(){
    int t;
    cin>>t;
    ll sum=0;
    ll temp;
    while(t>0){ll sum=0;
        ll n;
        cin>>n;
        while(n>0){
        temp= n%10;
        sum+=temp;
        n= n/10;
        }
         cout<<sum<<endl;
        t--;
    }

     
     return 0;
 }