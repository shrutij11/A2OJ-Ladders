#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int cnt =0;
     int n;
        cin >> n;
      
        int d = n+1;
        int s = 0;
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            s += x;
        }
     
     for(int i=1; i<=5; i++){
        
         if((s + i) % d != 1)
         {
          
              cnt++;
         }
            
     }
     cout<<cnt;
}
