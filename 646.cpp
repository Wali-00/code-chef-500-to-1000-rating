#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        if(N<=M){
            cout<<N<<endl;
        }
        else if(N>M){
            cout<<(N-M)+N<<endl;
        }
    }

}
