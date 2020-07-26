#include<bits/stdc++.h>

using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t>0){
         int k;
         cin>>k;
         char chess[8][8];
         for(int i=0;i<8;i++){
             for(int j=0;j<8;j++){
                 chess[i][j]='X';
             }
         }
         chess[0][0]='O';
          k--;
          
          for(int i=0;i<8;i++){
              for(int j=0;j<8;j++){
                  if(i==0 && j==0){
                      continue;
                  }
                  if(k==0){
                      break;
                  }
                  chess[i][j]='.';
                  k--;
              }
              if(k==0){
                  break;
              }
          }
           for(int i=0;i<8;i++){
              for(int j=0;j<8;j++){
                  cout<<(char)chess[i][j];
              }
              cout<<"\n";
           }
          
          
         
         t--;
     }
 }