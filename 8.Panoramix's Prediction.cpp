#include <bits/stdc++.h>
using namespace std;
 bool isPrime(int n)
{
 
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main() {
	// your code goes here
	int a,b,x;
	cin>>a;
	cin>>b;
	 x=a+1;
	  
	while(x <= b){
 
      if(isPrime(x))
      {
          if(x==b){
          cout<<"YES";
          break;}
          else{
          cout<<"NO";
          break;}
      }
      if(x>=b) cout<<"NO";
      x++;
}
 
}
