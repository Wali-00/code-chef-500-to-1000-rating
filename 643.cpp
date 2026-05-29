#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    if(X/2<Y || X<Y){
	        cout<<0<<endl;
	    }
	    else if(X/2==Y){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<(X/Y)/2<<endl;
	    }
	}

}
