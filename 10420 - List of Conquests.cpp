/*
1. cin.ignore();    // 讀一個字元，忽略它
2. getline(cin, l);    // 讀一行
3. cin, stringstream 都是 input-stream, 可以用 >> 讀取資料

4. map<key, value> m;    //會自動根據 key 排序，只能改 value
5. m.count(key);    // 讀取 key 的 value 值

6. pair<first, second> p;    // 兩個值都可以改
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    // cin 後，還有一個換行字元，需要把它處理掉，不然後面的 getline 會讀到它
    cin.ignore();
    
    string l;

    // map， 自動根據 key 排序
    map<string, int> m;

    // 從 cin 裡面讀一行進來
    while(getline(cin, l)){
        // 定義一個字串流，叫 ss
        stringstream ss(l);
        string s;

        // 從 ss 讀一個字串進來
        ss >> s;

        // 假設沒有 key，value 等於 0，要創建 key，不能直接 ++
        if(m.count(s) == 0){
            m[s] = 1;
        } else {
            m[s]++;
        }
    }
    
    // map 中的每個元素，都是 pair
    // 在 map 中，用 p 去讀每個 pair
    // pair<string, int> 過於累贅，可以用 auto，會自動判斷
    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}
