#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int N,X;
        cin>>N>>X;
        if(N/2>=X){
            cout<<X<<endl;
        }
        else if(N==X || X==0){
            cout<<0<<endl;
        }
        else{
            cout<<N-X<<endl;
        }
    }

}
