#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    int A[N];
    int even=0;
    int odd=0;
    for(int i=0;i<N;i++){
        cin>>A[i];
        if(A[i]%2==0){
            even+=1;
        }
        else{
            odd++;
        }
    }
    if(even>odd){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }
}
