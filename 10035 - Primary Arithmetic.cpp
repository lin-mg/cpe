#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 大小範圍超出 int
    long long a, b;
    
    while(cin >> a >> b){
        // 可能會有一方測資為 0
        if(a == 0 && b == 0) {
            break;  
        }

        long long cnt = 0;
        int carry = 0;

        // 可能一方為 0 了，但另一個測資 + carry >= 10，所以不能 "a && b"
        while(a || b){
            if(((a%10) + (b%10) + carry) >= 10){
                cnt++;
                carry = 1;
                a /= 10;
                b /= 10;
            } else {
                carry = 0;
                a /= 10;
                b /= 10;
            }
        }

        // 輸出小細節，複數 s
        if(cnt == 0){
            cout << "No carry operation." << endl;
        } else if(cnt == 1){
            cout << "1 carry operation." << endl;
        } else {
            cout << cnt << " carry operations." << endl;
        }
    }
}
