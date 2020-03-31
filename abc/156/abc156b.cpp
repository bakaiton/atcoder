#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n, k;
    int ans;
    cin>>n>>k;
    ans = (int)(log((double)n) / log((double)k)) + 1;
    cout<<ans<<endl;
}