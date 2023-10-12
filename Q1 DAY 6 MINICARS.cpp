#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   // cout<<n*2<<endl;
	   if(n%4==0)
	    {
	        cout<<(n/4)<<endl;
	    }
	    else{
	        cout<<(n/4)+1<<endl;
	    }
	}

	return 0;
}
