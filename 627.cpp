#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>=b && c>=d){
            cout<<a+c<<endl;
        }
        else if(a>=b && c<=d){
            cout<<a+d<<endl;
        }
         else if(a<=b && c<=d){
            cout<<b+d<<endl;
        }
        else{
            cout<<b+c<<endl;
        }
    }

}
