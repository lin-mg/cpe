/*
1. 能不用浮點數，就盡量不用
2. 題目有給定 a, b 大小順序，所以不會有順序問題
3. 與其根號，不如用 i*i 逼近（遍歷）
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;

    // 當最後一筆測資為 0 0 時，而且其他測資不會有 0 ，才可以這樣寫:
    while(cin >> a >> b && a && b){
        int cnt = 0;
        for(int i = 1; i*i <= b; i++){
            if(i*i >= a){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
