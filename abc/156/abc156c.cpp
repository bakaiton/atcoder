#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n;
    int ans;
    int tmp = 0;
    cin>>n;
    int x[n];
    for (int i = 0; i < n; i++){
        cin>>x[i];
    }
    for (int j = 0; j < n; j++){
        tmp = tmp + pow((int)(x[j] - 1), 2);
    }
    ans = tmp;
    for (int i = 2; i <= 100; i++){
        tmp = 0;
        for (int j = 0; j < n; j++){
            tmp = tmp + pow((int)(x[j] - i), 2);
        }
        if (ans > tmp){
            ans = tmp;
        }
    }
    cout<<ans<<endl;
}