/*
唯一難點，想辦法推出公式：
    玩家 I 勝率 = p * (1-p)^(I-1) / (1 - (1-p)^N)
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n, i;
        double p, q;
        
        cin >> n >> p >> i;
        
        q = 1 - p;

		// p = 0 時，需額外處理
        if(p == 0){
            cout << "0.0000";
        } else {
            printf("%.4f", p * pow(q, i - 1) / (1 - pow(q, n)));
        }
        
        cout << endl;
    }
    
    return 0;
}
