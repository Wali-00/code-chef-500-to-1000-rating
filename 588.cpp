#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int rev=0;
	    while(N!=0){
	       int dig= N%10;
	       rev = rev*10 + dig;
	       N = N/10;
	       
	    }
	    cout<<rev<<endl;
	}

}
