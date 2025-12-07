/*
1. 不知道陣列大小時，就用 vector 吧
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> fib = {1, 2};
    
    for(int i = 2; ; i++){
        fib.push_back(fib[i-1] + fib[i-2]);
    
        // 無法在迴圈開始前存取 fib[i]，因此要寫在 fib[i] 存在後
		if(fib[i] >= 1000000000){
            break;
        }
    }
    
    int N;
    cin >> N;
    
    while(N--){
        int n;
        cin >> n;
        
        cout << n << " = ";
        
        bool f = false;
        
        for(int i = fib.size() - 1; i >= 0; i--){
            if(n >= fib[i]){
                n -= fib[i];
                f = true;
                cout << "1";
            } else if((n < fib[i]) && f){
                cout << "0";
            }
        }
        
        cout << " (fib)" << endl;
    }
    
    return 0;
}
