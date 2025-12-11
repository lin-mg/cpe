/*
1. sort(v.begin(), v.end(), [M](int a, int b){...});
    - 自訂 sort 的排序法， 排序邏輯寫在 lambda 內
    
    - [M](int a, int b){...}
        - 這是一個 lambda, 會生成一個匿名 Compare 類別，並建立一個 Compare 物件
        - [] 用來讓 lambda 捕獲外部變數
        - 回傳值為 bool， true: a 前 b 後、 false: b 前 a 後
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    while((cin >> N >> M) && N && M){
        cout << N << " " << M << endl;
        
        vector<int> v;
        
        while(N--){
            int n;
            cin >> n;
            
            v.push_back(n);
        }
        
        sort(v.begin(), v.end(), [M](int a, int b){
            int ra = a % M;
            int rb = b % M;

			// mod 值: 小 -> 大
            if(ra != rb) {
                return ra < rb;
            }

			// a 奇, b 偶
            if(a % 2 != 0 && b % 2 == 0){
                return true;
            }

			// a 偶, b 奇
            if(a % 2 == 0 && b % 2 != 0){
                return false;
            }

			// 大奇 -> 小奇
            if(a % 2 != 0 && b % 2 != 0){
                return a > b;
            }

			// 小偶 -> 大偶
            if(a % 2 == 0 && b % 2 == 0){
                return a < b;
            }
        });
        
        for(int i : v){
            cout << i << endl;
        }
    }
    
    cout << "0 0" << endl;
}
