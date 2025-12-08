#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    
    while((cin >> t) && t){
        string s = bitset<32>(t).to_string();
        
        int sum = 0;
        
        for(int i = 0; i < 32; i++){
            if(s[i] == '1'){
                sum++;
            }
        }
        
        cout << "The parity of ";
        
        bool f = false;
        
        for(int i = 0; i < 32; i++){
            if(s[i] == '1'){
                cout << '1';
                f = true;
            } else if((s[i] == '0') && f){
                cout << '0';
            }
        }
        
        cout << " is " << sum << " (mod 2)." << endl;
    }
    
    return 0;
}
