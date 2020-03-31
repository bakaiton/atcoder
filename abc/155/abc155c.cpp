#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
    vector<string> ans;
    int n;
    int flag = 0;
	cin>>n;
    int cnt[n];
    for (int i = 0; i < n; i++){
        cnt[i] = 0;
    }
    string x[n];
    for (int i = 0; i < n; i++){
        cin>>x[i];
    }

    //数を数える
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if(x[i] == x[j]){
                cnt[i]++;
            }
        }
    }
    //最大を探す
    int max = 0;
    for (int i = 0; i < n; i++){
        if(max < cnt[i]){
            max = cnt[i];
        }
    }
    for (int i = 0; i < n; i++){
        if(max == cnt[i]){
            ans.emplace_back(x[i]);
        }
    }
    //ソート
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}