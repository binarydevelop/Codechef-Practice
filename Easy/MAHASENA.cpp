#include<bits/stdc++.h>

using namespace std;
#define ll long long
bool isReady(ll arr[], ll N){
    ll odd= 0;
    ll even= 0;
    for(int i = 0; i<N;i++ ){
        if(arr[i] % 2 == 0 ){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even > odd){
        cout<<"READY FOR BATTLE";
    }else{
        cout<<"NOT READY";
    }
}
int main()
{
        ll N;
        cin>>N;
        ll arr[N] = {};
        for(int i=0;i<N;i++){
            cin>> arr[i];
        }
        isReady(arr, N);

    return 0;
}