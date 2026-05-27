#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,X,Y;
	    cin>>N>>X>>Y;
	    if(Y==0){
	        cout<<"YES"<<endl;
	    }
	    else if(X>Y){
	        cout<<"NO"<<endl;
	    }
	    else if(X*N>=Y && Y%X==0){
	        cout<<"YES"<<endl;
	    }
	    else if(X*N<Y){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
