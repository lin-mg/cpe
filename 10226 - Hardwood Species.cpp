#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    cin.ignore();
    cin.ignore();
    
    int f = 0;
    
    while(t--){
        if(f++){
            cout << endl;
        }
        
        string l;
        
        int cnt = 0;
        
        map<string,int> m;
        
        while(getline(cin, l) && l != ""){
            if(m.count(l) != 0){
                m[l]++;
            } else {
                m[l] = 1;
            }
            
            cnt++;
        }
        
        for(auto p : m){
            cout << p.first << " ";
            printf("%.4f", (double) p.second/cnt*100);
            cout << endl;
        }
    }
    
    return 0;
}
