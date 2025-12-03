/*
1. 計數陣列要用 int ，不要用 char
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;

    // 有空白字元，要用 getline，不能用 cin
    while(getline(cin, a)){
        getline(cin, b);
        
        int m[128] = {};
        int n[128] = {};
        
        for(char c : a){
            m[c]++;
        }
        for(char c : b){
            n[c]++;
        }
        
        for(char i = 0; i < 127; i++){
            
            /* 另一種寫法
            for(int j = 0; j < min(m[i], n[i]); j++) {
                cout << i;
            }
            */
            
            while((m[i] > 0) && (n[i] > 0)){
                cout << i;
                m[i]--;
                n[i]--;
            }
        }

        cout << endl;
    }

    return 0;
}
