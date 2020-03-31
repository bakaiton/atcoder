#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n;
    int flag = 0;
    string ans[] = {"APPROVED", "DENIED"};
	cin>>n;
    int x[n];
    for (int i = 0; i < n; i++){
        cin>>x[i];
    }
    for (int i = 0; i < n; i++){
        if ((x[i]%2 == 0)&&((x[i]%3 != 0)&&(x[i]%5 != 0))){
                flag = 1;
        }
    }
	cout<<ans[flag]<<endl;
}