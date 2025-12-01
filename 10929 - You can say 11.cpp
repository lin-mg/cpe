#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    // 因為是字串，所以不等於 0 要這樣寫:
    while(cin >> s && s != "0"){
        int len = s.length();
        int a = 0, b = 0;
        
        for(int i = 0; i < len; i++){
            if(i%2 == 0){
                // 字元轉數字，減去第一個字元
                a += s[i] - '0';
            } else {
                b += s[i] - '0';
            }
        }
        
        if((abs(a - b)%11) == 0){
            // 字串接著輸出的時候，如果要用加的，要加括號
            cout << (s + " is a multiple of 11.") << endl;
            // cout << s << " is a multiple of 11." << endl;
        } else {
            cout << (s + " is not a multiple of 11.") << endl;
        }
    }    
}
