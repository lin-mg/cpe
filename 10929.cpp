#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    
    while(cin >> s && s != "0"){
        int len = s.length();
        int a = 0, b = 0;
        
        for(int i = 0; i < len; i++){
            if(i%2 == 0){
                a += s[i] - '0';
            } else {
                b += s[i] - '0';
            }
        }
        
        if((abs(a- b)%11) == 0){
            cout << (s + " is a multiple of 11.") << endl;
        } else {
            cout << (s + " is not a multiple of 11.") << endl;
        }
    }    
}
