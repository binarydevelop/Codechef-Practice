#include<bits/stdc++.h>

using namespace std;
#define ll long long
bool isPrime(ll N){
    bool primeFlag = 0;
    for(int i = 2; i <N ;i++){
        if(N % i == 0){
            primeFlag = 1;
            break;
        }
    }
    if(primeFlag || N == 1){
        cout<<"no"<<"\n";
    }else{
        cout<<"yes"<<"\n";
    }
}
int main(){
    ll t;
    cin>>t;
    while(t > 0){
        ll N;
        cin>>N;
        isPrime(N);
        t--;
    }
    
    
    return 0;
}