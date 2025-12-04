#include <bits/stdc++.h>

using namespace std;

int main()
{
    string l;
    bool flag = false;
    
    while(getline(cin, l)){
        for(char c : l){
            // 字元跟字元比，記得用 ''
            if(c == '\"'){
                if(!flag){
                    cout << "``";
                } else {
                    cout << "\'\'";
                }
                flag = !flag;
            } else {
                cout << c;
            }
        }
        cout << endl;
    }
    
    return 0;
}
