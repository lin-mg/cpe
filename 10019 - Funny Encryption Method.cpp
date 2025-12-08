/*
1.
bitset<n>(val);	// 建立一個 bitset，有 n bits，值是 val (decimal)
bitset<n>(val).to_string();	// 呼叫 to_string 把 binary 轉為 string

2.
stoi(str, 0, radix); // 把 string 轉成 int 輸出，以某個進位的方式

3.
to_string(val);	// 把 val 轉成 string
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    while(N--){
        int m;
        cin >> m;
        
        string s1 = bitset<32>(m).to_string();
        
        int b1 = 0;
        
        for(int i = 0; i < 32; i++){
            if(s1[i] == '1'){
                b1++;
            }
        }
        
        int hex = stoi(to_string(m), 0, 16);
        
        string s2 = bitset<32>(hex).to_string();
        
        int b2 = 0;
        
        for(int i = 0; i < 32; i++){
            if(s2[i] == '1'){
                b2++;
            }
        }
        
        cout << b1 << " " << b2 << endl;
    }
    
    return 0;
}
