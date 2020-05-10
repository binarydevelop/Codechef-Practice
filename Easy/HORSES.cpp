#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    int N;
    while(T>0){
       cin>>N;
       long long int input;
       int diff;
       vector<long long int> si;
       for(int i=0;i<N;i++){
           cin>>input;
           si.push_back(input);
       }
        sort(si.begin(),si.end());
        diff=si[1]-si[0];
        for(int j=2;j<N;j++){
            if(si[j]-si[j-1]<diff){
                diff=si[j]-si[j-1];
            }
            
        }
        cout<<diff<<"\n";
        T--;
    }
    return 0;
}