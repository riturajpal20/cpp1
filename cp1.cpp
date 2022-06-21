#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int p=a+b;
        int q=b+c;
        int r=c+a;
       int arr[3]={p,q,r};
       sort(arr,arr+3);
       cout<<arr[2]<<endl;
    }
	// your code goes here
	return 0;
}
