#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int s = 0;
    int ans = 0;
    int fh = 0,fy = 0;
 
    cin>>s;
 
    for (int i = 0; i*500 <= s; i++){
        fh = i;
    }
    for (int i = 0; i*5 <= s-fh*500; i++){
        fy = i;
    }
 
    ans = fh*1000 + fy*5;
    cout<<ans<<endl;
}