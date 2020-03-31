#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 
int main(){
	string s;
	string ans[] = {"Yes", "No"};
	int flag = 0, n = 0;
	cin>>s;
	n = s.length();
	
	for(int i = 0; i < n/2; i++){
		if (s[i] != s[n-i-1]){
			flag = 1;
		}
	}
	for(int i = 0; i < (n-1)/2/2; i++){
		if (s[i] != s[(n-1)/2 - i - 1]){
			flag = 1;
		}
	}
	for(int i = n; i < n - (n-1)/4; i--){
		if (s[i] != s[(n+3)/2 + (n-i)]){
			flag = 1;
		}
	}
	
	cout<<ans[flag]<<endl;
}