/*
1. ASCII 範圍 0 ~ 127
2. 排序的方式存好，麻煩；排序的方式輸出，簡單。心得：暴力就是方便！
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 直接設一個 ACSII 範圍的陣列，就可以直接用字元當索引
    int arr[128] = {};
    int m = 0;

    char c;
    while(cin >> c){
        if(isalpha(c)){
            arr[toupper(c)]++;
            m = max(m, arr[toupper(c)]);
        }
    }

    // 從 value 最高的開始遍歷，相等的即輸出
    for(int i = m; i > 0; i--){
        for(char j = 'A'; j <= 'Z'; j++){
            if(arr[j] == i){
                cout << j << " " << i << endl;
            }
        }
    }
    
    return 0;
}
