#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str,int i){
    int n=str.length();
    if(i>n-i-1){
        return true;
    }

    if(str[i]!=str[n-i-1]){
        return false;
    }

    return isPalindrome(str,i+1);

}


int main(){

    string s;
    cin>>s;

    if(isPalindrome(s,0)){
        cout<<"String is Palindrome"<<endl;
    }
    else{
         cout<<"String is not Palindrome"<<endl;
    }
}