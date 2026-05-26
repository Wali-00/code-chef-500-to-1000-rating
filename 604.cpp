#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int eligible=0;
	    int X;
	    cin>>X;
	    int arr[N];
	    for(int i=0; i<N; i++){
	        cin>>arr[i];
	        if(arr[i]>=X){
	            eligible++;
	        }
	    }
	    cout<<eligible<<endl;
	    
	}

}
