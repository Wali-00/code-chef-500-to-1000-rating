#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C,D;
	    cin>>A>>B>>C>>D;
	    if(A>C || B>D){
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	    else{
	        cout<<"POSSIBLE"<<endl;
	    }
	}

}
