#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int a, b, c;
    int flag = 1;
    string ans[] = {"Yes", "No"};
	cin>>a>>b>>c;
    if ((a == b && b != c)||
        (b == c && b != a)||
        (a == c && a != b)){
            flag = 0;
        }
	cout<<ans[flag]<<endl;
}