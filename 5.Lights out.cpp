#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int a;
	int arr[3][3];
	int res[3][3]={1,1,1,1,1,1,1,1,1};
	for(int i=0; i<3; i++){
	    for(int j=0; j<3; j++){
	        cin>>arr[i][j];
	    }
	}
	
		for(int i=0; i<3; i++){
	    for(int j=0; j<3; j++){
	        if(arr[i][j] %2 == 1){
	            res[i][j]= res[i][j]^ 1;
	            if((j-1)>=0)
	            {
	                res[i][j-1]=res[i][j-1] ^ 1;
	            }
	             if((i-1)>=0)
	            {
	                res[i-1][j]=res[i-1][j] ^ 1;
	            }
	             if((j+1)<=2)
	            {
	                res[i][j+1]=res[i][j+1] ^ 1;
	            }
	             if((i+1)<=2)
	            {
	                res[i+1][j]=res[i+1][j] ^ 1;
	            }
	        }
	    }
	}
		for(int i=0; i<3; i++){
	    for(int j=0; j<3; j++){
	        cout<<res[i][j];
	    }
	    cout<<endl;
	}
	
}
