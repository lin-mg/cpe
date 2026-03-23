/*
1. stoi(str, 0, radix); // 把 string 轉成 int 輸出，以某個進位的方式
2. bitset<n>(val).to_ulong(); // 建立一個 bitset，有 n bits，值是 val (decimal)，呼叫 to_ulong 把 string 轉為 int
3. n = __gcd(x, y); // 回傳 x 跟 y 的最大公因數
*/

# include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, no = 1;
    cin >> N;
    
    while(N--){
        string s1, s2;
        cin >> s1 >> s2;
        
        int n = stoi(s1, 0, 2);
        int m = stoi(s2, 0, 2);
		// m = bitset<32>(m).to_ulong();
        
        if(__gcd(n, m) > 1){
            cout << "Pair #" << no << ": All you need is love!" << endl;
        } else {
            cout << "Pair #" << no << ": Love is not all you need!" << endl;
        }
        
        no++;
    }
}
