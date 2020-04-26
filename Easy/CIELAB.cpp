
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{ ll A;
ll B;
ll C;
cin>> A >> B;
C= (A-B);
if(C%10==9){
    cout<<C-1<<endl;
}else{
    cout<<C+1<<endl;
}

    return 0;
}