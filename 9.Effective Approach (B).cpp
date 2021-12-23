#include <bits/stdc++.h>
using namespace std;
 
const int N = 100001;
int n, m, pos[N];
int main() {
	// your code goes here
 
	cin>>n;
 
	for(int i=0; i< n; i++){
	    int num;
	    cin>>num;
	    pos[num]= i+1;
	}
long long v=0,p=0;
    cin>>m;
    
    	for(int i=0; i< m; i++){
    	    int q;
	    cin>>q;
	    v += pos[q];
	    p += n-pos[q] + 1;
	}
	cout<<v<<" "<<p;
    
}
