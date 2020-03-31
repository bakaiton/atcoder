#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int k = 0, n = 0;
    long ans = 0;
    cin>>k>>n;
    int a[n];
    int max = 0;
 
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
 
    for (int i = 0; i < n-1; i++){
        if ( (a[i+1] - a[i]) > a[max]){
            max = i+1;
        }
    }
 
    if (a[max] - a[max -1] < a[0] + (k - a[n-1])){
        max = 0;
        ans = k - (a[0] + (k - a[n-1]));
    }else{
        ans = k - (a[max] - a[max - 1]);
    }
 
    cout<<ans<<endl;
}