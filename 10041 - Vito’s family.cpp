/*
1. abs(), 取絕對值
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int r;
        cin >> r;
        
        int s[r] = {};
        for(int i = 0; i < r; i++){
            cin >> s[i];
        }

        // 找最小值，初始要設大
        int m = 99999999;
        for(int i = 0; i < r; i++){
            int sum = 0;
            for(int j = 0; j < r; j++){
                sum += abs(s[i] - s[j]);
            }
            m = min(m, sum);
        }
        cout << m << endl;
    }

    return 0;
}
