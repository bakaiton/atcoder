#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s;
    int flag = 0;
    string ans[] = {"Sunny", "Cloudy", "Rainy"};
	cin>>s;
    for (int i = 0; i < 3; i++){
        if (ans[i] == s){
            if (i != 2){
                flag = i + 1;
            }else{
                flag = 0;
            }
        }
    }
	cout<<ans[flag]<<endl;
}