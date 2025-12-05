/*
1. cin.ignore() 只讀一個字元（任何字元，含空白）
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    while(cin >> n){
        /* 可以不用額外處理 n = 1，哈哈（小丑
        if(n == 1){
            cout << "Jolly" << endl;
            cin >> n;
            continue;
        }
        */
        
        int j[n] = {};
        
        int a, b;
        cin >> a;
        
        for(int i = 0; i < n-1; i++){
            cin >> b;
            if((abs(a - b) > 0) && (abs(a - b) < n)){
                j[abs(a - b)] = 1;
            }
            a = b;
        }
        
        bool flag = true;
        
        for(int i = 1; i <= n-1; i++){
            if(j[i] != 1){
                flag = false;
                break;
            }
        }
        
        if(flag){
            cout << "Jolly";
        } else{
            cout << "Not jolly";
        }
        
        cout << endl;
    }
    
    return 0;
}
