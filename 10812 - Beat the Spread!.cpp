/*
1. early return pattern: 提早返回，避免深層嵌套
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    int s, d;
    
    while(cin >> s >> d){
        int a = 0, b = 0;
        
        if(s < d){
            cout << "impossible" << endl;
			continue;
        }

		// 除了 a + b < a - b 的情況，還要考慮相加後，a 是奇數的情況
        if((s + d) % 2 == 1){
            cout << "impossible" << endl;
			continue;
    	}
		
        a = (s + d) / 2;
        b = s - a;
		
        cout << max(a, b) << " " << min(a, b) << endl;
    }
    
    return 0;
}
