#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
 
	int n,i=0;
      cin>>n;
      
      int arr[7];
        
        for(int i=0; i<7; i++){
            cin>>arr[i];
        }
            int j=arr[0];
            
       while(n>j){
           
          i++;
          i%=7;
          j+=arr[i];
       }
       
        cout<<i +1<<endl;
     
        
       
	return 0;
}
