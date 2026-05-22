#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int B1,B2,B3;
	    cin>>B1>>B2>>B3;
	    if(B1==0 && B2==0 && B3==0){
	        cout<<"Water filling time"<<endl;
	    }
	    else if(B1==0 && B2==0){
	        cout<<"Water filling time"<<endl;
	    }
	    else if(B1==0 && B3==0){
	        cout<<"Water filling time"<<endl;
	    }
	    else if(B3==0 && B2==0){
	        cout<<"Water filling time"<<endl;
	    }
	    else{
	        cout<<"Not now"<<endl;
	    }
	}

}
