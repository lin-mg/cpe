#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 等同 char arr[101][101] = {};
    string s[101] = {};
    
    int n = 0;
    int m = 0;
    
    while(getline(cin, s[n])){
        // length() 的回傳型別為 size_t，如果要與 int 比較，要轉型
        m = max(m, (int) s[n].length());
        n++;
    }
    
    for(int i = 0; i < m; i++){
        for(int j = n-1; j >= 0; j--){
            // 利用字串長度與 i 的值來判斷是否加空格
            if(s[j].length() <= i){
                cout << " ";
            } else {
                cout << s[j][i];
            }
        }
        cout << endl;
    }
    
    return 0;
}
