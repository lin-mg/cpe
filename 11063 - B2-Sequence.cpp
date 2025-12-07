/*
1. 當測資沒讀完時，不能break，會出事
2. Please 好好的仔細讀題目：
	- b > 0
	- 嚴格遞增
	- 是 b[i] + b[j], i <= j，不是 b[i] + b[i+1]
	- 末尾換行
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int t = 1;
    
    while(cin >> n){
        
        bool flag = true;
        
        int b[n] = {};
        bool arr[20001] = {};
        
        for(int i = 0; i < n; i++){
            cin >> b[i];
            
            if(b[i] < 1){
                flag = false;
            }
            
            if(i > 0){
                if(b[i-1] >= b[i]){
                    flag = false;
                }
            }
        }
        
        if(flag){
            for(int i = 0; i < n; i++){
                for(int j = i; j < n; j++){
                    if(arr[b[i] + b[j]] ){
                        flag = false;
                    } else {
                        arr[b[i] + b[j]] = true;
                    }
                }
            } 
        }
        
        if(flag){
            cout << "Case #" << t << ": It is a B2-Sequence." << endl;
        } else {
            cout << "Case #" << t << ": It is not a B2-Sequence." << endl;
        }
        
        cout << endl;
        
        t++;
    }
    
    return 0;
}
