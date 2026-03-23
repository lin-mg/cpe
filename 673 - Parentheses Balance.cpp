/*
1. stack 的方法：st.push(c), st.pop(), st.top(), st.empty()...
2. 使用 getline 時，需檢查前面是否有換行，如有換行，需使用 cin.ignore() 讀掉
*/

# include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    
    while(n--){
        stack<char> st;
        
        string l;
        getline(cin, l);
        
        bool f = true;
        
        for(char c: l){
            if(c == '(' || c == '['){
                st.push(c);
            } else if(c == ')'){
                if(st.empty() || st.top() != '('){
                    f = false;
                    break;
                } else {
                    st.pop();
                }
            } else if(c == ']'){
                if(st.empty() || st.top() != '['){
                    f = false;
                    break;
                } else {
                    st.pop();
                }
            }
        }
        
        if(f && st.empty()){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
