#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int a[3][3];
    int n;
    bool aflag[3][3];
    int flag = 0;
    string ans[] = {"No", "Yes"};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin>>a[i][j];
            aflag[i][j] = false;
        }
    }
    cin>>n;
    int b[n];
    for (int i = 0; i < n; i++){
        cin>>b[i];
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                if (b[i] == a[j][k]){
                    aflag[j][k] = true;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++){
        //縦横
        if (aflag[i][0] && aflag[i][1] && aflag[i][2]){
            flag = 1;
        }
        if (aflag[0][i] && aflag[1][i] && aflag[2][i]){
            flag = 1;
        }
    }
    //斜め
    if (aflag[0][0] && aflag[1][1] && aflag[2][2]){
        flag = 1;
    }
    if (aflag[0][2] && aflag[1][1] && aflag[2][0]){
        flag = 1;
    }
    cout<<ans[flag]<<endl;
}