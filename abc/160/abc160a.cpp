#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string s = "";
    string ans[] = {"Yes", "No"};
    int flag = 0;
 
    cin>>s;
        
    if (s[2] != s[3]){
        flag = 1;
    }
    if (s[5] != s[4]){
        flag = 1;
    }
 
    cout<<ans[flag]<<endl;
}