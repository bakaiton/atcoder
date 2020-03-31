#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n, m;
    int ans = 0;
    bool flag = true;
    bool flag1 = true;
	cin>>n>>m;
    int s[m], c[m], num[n];
    for (int i = 0; i < n; i++){
        num[i] = 0;
    }

    for (int i = 0; i < m; i++){
        cin>>s[i]>>c[i];
        //num[s[i]-1] = c[i];
        //cout<<num[s[i]]<<endl; 
    }
    //重複確認
    for (int i = 0; i < m; i++){
        for (int j = i; j < m; j++){
            if (s[i] == s[j]){
                if (c[i] != c[j]){
                    ans = -1;
                }
            }
        }
    }

    //頭が0かの判定
    if (n == 2){
        for (int i = 0; i < m; i++){
            if (s[i] == 1){
                if (c[i] == 0){
                    ans = -1;
                }
            }
        }

        if (ans != -1){
            for (int i = 0; i < m; i++){
                if (s[i] == 2){
                    if (c[i] == 0){
                        num[0] = 1;
                    }
                }
            }
        }

    }else if (n == 3){
        for (int i = 0; i < m; i++){
            if (s[i] == 1){
                if (c[i] == 0){
                    ans = -1;
                }else{
                    flag = false;
                }
            }
        }

        if (flag){
            for (int i = 0; i < m; i++){
                if (s[i] == 2){
                    if (c[i] == 0){
                        num[0] = 1;
                        flag1 = false;
                    }
                }
            }
            if (flag1){
                for (int i = 0; i < m; i++){
                    if (s[i] == 3){
                        if (c[i] == 0){
                            num[1] = 1;
                        }
                    }
                }
            }
        }
    }

    //結果表示
    if (ans != -1){
        for (int i = 0; i < m; i++){
            num[s[i]-1] = c[i];
        }

        if (n == 3){
            ans = num[0]*100 + num[1]*10 + num[2];
        }else if (n == 2){
            ans = num[0]*10 + num[1]*1;
        }else{
            ans = num[0]*1;
        }
    }

	cout<<ans<<endl;
}