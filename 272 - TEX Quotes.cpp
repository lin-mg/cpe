/*
1. 字元裡面，如果要表示 '''，要 '\''；字串裡面，如果要表示 """，要 "\""
   會衝突要加反斜線，不會衝突則不用
*/

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
                    cout << "''";
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
