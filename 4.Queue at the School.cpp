#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n,t;
	cin>>n>>t;
	char arr[n];
	for(int i=0; i<n;i++){
	    cin>>arr[i];
	}
	while(t){
	   
	   for(int i=1; i<n; i++){
	       if(arr[i]=='G' && arr[i-1]=='B')
	       {
	           arr[i]='B';
	           arr[i-1]='G';
           i++;
	       }
	       
	   }
	   t--;   
	}
 	for(int i=0; i<n;i++){
	    cout<<arr[i];
	}
}
