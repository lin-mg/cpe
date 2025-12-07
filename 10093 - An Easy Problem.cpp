/*
1. 推導過程...，結論：字元轉成 0-9 A-Z a-z 加起來就好
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string r;
    
    while(cin >> r){
        int sum = 0;
        
		//input 可能有範圍之外的字元，需要初始 n = 2
		int n = 2;
        
        for(int i = r.length() - 1; i >= 0; i--){
            int a;

			// input 可能有範圍之外的字元，需要 continue 規避掉
            if('0' <= r[i] && r[i] <= '9'){
                a = r[i] - '0';
            } else if('A' <= r[i] && r[i] <= 'Z'){
                a = r[i] - 'A' + 10;
            } else if('a' <= r[i] && r[i] <= 'z'){
                a = r[i] - 'a' + 10 + 26;
            } else continue;
            
            n = max(n, a + 1);
            
            sum += a;
        }
        
        bool f = false;
        
        for(int i = n; i <= 62; i++){
            if(sum % (i-1) == 0){
                cout << i << endl;
                f = true;
                break;
            }
        }
        
        if(!f){
            cout << "such number is impossible!" << endl;
        }
    }
    
    return 0;
}
