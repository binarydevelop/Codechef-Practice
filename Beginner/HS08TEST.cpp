#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    double y;
    cin>> x >>y;
    double remain=0;
    if((x<= y-0.50)  && x % 5 == 0){
       remain =((y-x)-0.50);
        if(remain<=y){
        cout<<fixed<<setprecision(2)<<remain;
        }
    }else{
            cout<<fixed<<setprecision(2)<<y; 
        }
        return 0;
}