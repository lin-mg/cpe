#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;

    while(cin >> a >> b){
        // 先輸出再 swap 就不會有順序錯亂的問題
        cout << a << " " << b << " ";

        // 敘述沒說 a 一定小於 b
        if(a > b){
            swap(a, b);
        }

        int m = 0;
        for(int i = a; i <= b; i++){
            int n = i;
            int cnt = 0;

            // 題目給的虛擬碼
            while(1){
                cnt++;
                if (n == 1) {
                    break;
                } else if (n%2 == 1) {
                    n = 3*n + 1;
                } else {
                    n /= 2;
                } 
            }
            m = max(m, cnt);
        }
        cout << m << endl;
    }    
}
