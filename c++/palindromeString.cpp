#include <bits/stdc++.h>
using namespace std;

bool chk(string s){
  int i = 0;
  int j = s.size();
  while(i<j){
    if(s[i]!=s[j])
      reutrn false;
  }
  return true;
}

int main(){
    string s;
    getline(cin,s);
    int n = s.size();
    if(chk(s))
      cout<<"YES";
    else
      cout<<"NO";
    return 0;
}
