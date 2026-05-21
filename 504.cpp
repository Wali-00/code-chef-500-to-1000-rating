#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    int cost=0;
    while(T--){
        int N,X;
        cin>>N>>X;
        if(N<=6){
            cout<<X<<endl;
        }
        else{
           cout<<ceil(N/6.0)*X<<endl;
    }
    }
}
