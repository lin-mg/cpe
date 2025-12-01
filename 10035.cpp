#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;
    
    while(cin >> a >> b){
        if(a == 0 && b == 0) {
            break;  
        }
        long long cnt = 0;
        int carry = 0;
        
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
        
        if(cnt == 0){
            cout << "No carry operation." << endl;
        } else if(cnt == 1){
            cout << "1 carry operation." << endl;
        } else {
            cout << cnt << " carry operations." << endl;
        }
    }
}
