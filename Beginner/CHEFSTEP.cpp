#include<bits/stdc++.h>

using namespace std;
  int main(){
      int t;
      cin>>t;
      while(t>0){
          int N;
          long long int K;
          cin>> N >> K;
          long long int input;
          vector<long long int> arr;
          for(int i=0;i<N;i++){
              cin>>input;
              arr.push_back(input);
          }
          
          for(auto i=arr.begin();i!=arr.end();i++){
              
              if(*i%K==0){
                  cout<<1;
              }else{
                  cout<<0;
              }
              
          }
          cout<<"\n";
          t--;
      }
      
      
      
      return 0;
  }