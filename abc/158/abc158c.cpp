#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    double a, b;
    double xa;
    int xb;
    int ans = 0;
	cin>>a>>b;
    xa = a/0.08;
    xb = xa * 0.1;
    if (xb== b){
        ans = (int)xa;
    }else{
        ans = -1;
    }
	cout<<ans<<endl;
}