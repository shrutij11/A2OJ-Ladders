#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
      string str;
      cin>>str;
      int up,lo=0;
      for(int i=0; i<str.length(); i++){
           int c = str[i];
        if (islower(c))
            lo++;
        else if (isupper(c))
           up++;       
      }
      if(lo>=up){
          for (int i = 0; i < str.length(); i++) {
        int c = str[i];
        if (isupper(c))
            str[i] = tolower(c);       
    }
      }
      else{
          for (int i = 0; i < str.length(); i++) {
        int c = str[i];
        if (islower(c))
            str[i] = toupper(c);
    }
      }
	cout<<str;
}
