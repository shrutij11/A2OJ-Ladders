#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int yr;
	cin>>yr;
	while(true){
	    yr++;
	    int a = yr/1000;
	     int b = yr/100 %10;
	      int c = yr/10 %10;
	       int d = yr%10;
	       if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
	           cout<<yr;
	           break;
	       }
	}
}
