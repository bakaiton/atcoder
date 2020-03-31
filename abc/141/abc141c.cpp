#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n, k, q ;
    string ans[] = {"Yes", "No"};
    int flag = 0;
    cin>>n>>k>>q;
    int a[q];
    int sa[n];
    int tnp;
        
    for (int i = 0; i < n; i++){
        sa[i] = k - q;
    }
    for (int i = 0; i < q; i++){
        cin>>tnp;
        sa[tnp-1]++; 
    }
    for (int i = 0; i < n; i++){
        if (sa[i] <= 0){
            cout<<ans[1]<<endl;
        }else{
            cout<<ans[0]<<endl;
        }
    }
}