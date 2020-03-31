#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    double a, b;
    double xa, xb;
    int ans = -1;
	cin>>a>>b;
    for (int i = 100; i > 0; i--){
        if ((int)(i*0.08) == a){
            if ((int)(i*0.1) == b){
                ans = i;
            }
        }
    }
	cout<<ans<<endl;
}