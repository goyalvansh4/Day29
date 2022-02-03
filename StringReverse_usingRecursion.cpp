#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


void reverse(string& str,int i){
  int n=str.length();
  
  if(i>n-i-1){
  return ;
  }
  
   swap(str[i],str[n-i-1]);
   i++;
    reverse(str,i);
    
 }


int main(){

  string s;
  cin>>s;
  
   reverse(s,0);
    cout<<s<<endl;
  return 0;
  
  }

