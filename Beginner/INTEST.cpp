#include<bits/stdc++.h>

using namespace std;
#define ll long long int 
int main(){
        int n;
        ll k;
        cin>> n>> k;
        ll count=0;
        ll input;
        for(int i=0;i<n;i++){
            cin>>input;
            if(input%k==0){
                count++;
            }
        }
       cout<<count;
        return 0;
}