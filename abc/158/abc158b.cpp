#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    long n, a, b;
    long ans = 0;
	cin>>n>>a>>b;
    ans = (n/(a+b))*a;
    if (n%(a+b) - a < 0){
        ans = ans + (n%(a+b));
    }else{
        ans = ans + a;
    }
	cout<<ans<<endl;
}