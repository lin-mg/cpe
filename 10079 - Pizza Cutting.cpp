/*
1. 要會切蛋糕（累加就好）
2. 注意溢位問題
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    
    while((cin >> n) && (n >= 0)){
        long long sum = 0;
        
        for(long long i = 0; i <= n; i++){
            sum += i;
        }
        
        cout << sum + 1 << endl;
    }

    return 0;
}
