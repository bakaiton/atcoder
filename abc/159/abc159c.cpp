#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 
int main(){
	double l, n;
	double ans = 0.0;
	cin>>l;
	n = l/3;
	ans = n * n * n;
	cout<<fixed;
	cout<<ans<<endl;
}