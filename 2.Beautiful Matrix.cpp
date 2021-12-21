#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int a=0;
	int arr[6][6];
	
	for(int i=1; i<=5; i++){ 
       for(int j=1; j<=5; j++){
             cin>>arr[i][j];
       }
    }
	
     for(int i=1; i<=5;i++ )
     {
         for(int j=1;j<=5;j++){
             if(arr[i][j]==1){
                
                 a=abs(3-i)+abs(3-j);
                 cout<<a;
               return 0;
             }
         }
     }
}
