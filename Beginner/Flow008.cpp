#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        if(N < 10){
            cout<<"Thanks for helping Chef!"<<"\n";
        }
        else{
            cout<<"-1"<<"\n";
        }
    }
    
    return 0;
}