#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int N,X;
        cin>>N>>X;
        if(X>=N){
            cout<<"0"<<endl;
        }
        else{
            double need=(N-X)/4.0;
            cout<<ceil(need)<<endl;
        }
    }

}
