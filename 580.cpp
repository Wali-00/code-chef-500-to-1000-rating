#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    int sum =0;
	    int arr[N];
	    for(int i=0; i<N; i++){
	        cin>>arr[i];
	        }
	        
	    for(int i=0; i<N; i++){
	        if(arr[i]>=1000){
	           sum += 1;
	        }
	    }
	    cout<<sum<<endl;
	}

}
