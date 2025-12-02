/*
1. 輸出格式問題，有時候從題目 output 看不出來
2. long long，約 17、18 位數
3. int 的範圍是 2147483647 ~ -2147483648（約 10 位數）
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    int cnt = 1;
    
    while(cin >> n){
        // 格式問題，對齊排版，用 setw() 解決；或直接用 printf
        cout << setw(4) << cnt << ".";
        // printf("%4d", cnt);

        // 0 ，額外處理
        if(n == 0){
            cout << " " << n << endl;
            cnt++;
            continue;
        }

        //  高位元（記得是 >=）
        if(n >= 10000000){
            int n1 = n/10000000;
            
            if(n1/10000000) {
                cout << " " << n1/10000000 << " kuti";
                n1 %= 10000000;
            } if(n1/100000) {
                cout << " " << n1/100000 << " lakh";
                n1 %= 100000;
            } if(n1/1000) {
                cout << " " << n1/1000 << " hajar";
                n1 %= 1000;
            } if(n1/100) {
                cout << " " << n1/100 << " shata";
                n1 %= 100;
            } if(n1) {
                cout << " " << n1 << " kuti";
            } if(n1 == 0){
                cout << " kuti";
            }
            
            n %= 10000000;
        }
        
        
        if(n/100000) {
            cout << " " << n/100000 << " lakh";
            n %= 100000;
        } if(n/1000) {
            cout << " " << n/1000 << " hajar";
            n %= 1000;
        } if(n/100) {
            cout << " " << n/100 << " shata";
            n %= 100;
        } if(n) {
            cout << " " << n;
        }
        
        cout << endl;
        cnt++;
    }

    return 0;
}
