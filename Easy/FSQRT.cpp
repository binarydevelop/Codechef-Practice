#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    int N;
    while(T>0){
       cin>>N;
       long long int input;
       vector<long long int> si;
       for(int i=0;i<N;i++){
           cin>>input;
           si.push_back(input);
       }
        sort(a.begin(),a.end());
        cout<<si[0]<<" "<<si[1];
        T--;
    }
    return 0;
}