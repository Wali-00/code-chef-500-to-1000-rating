#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    if(N<=15){
	        if(N<=10){
	            cout<<"Lower Double"<<endl;
	        }
	        else{
	            cout<<"Lower Single"<<endl;
	        }
	    }
	    else if(N>15){
	        if(N<=25){
	            cout<<"Upper Double"<<endl;
	        }
	        else{
	            cout<<"Upper Single"<<endl;
	        }
	    }
	}

}
