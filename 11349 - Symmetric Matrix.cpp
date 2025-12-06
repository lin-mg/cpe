/*
1. 注意型別大小，int -> long long
2. 注意題目敘述，對稱矩陣重新定義、檢查非負元素
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    int n;
    int m = 1;
    string ign;
    
    while(t--){
        cin >> ign >> ign >> n;
        
        long long arr[n*n] ={};
        
        for(int i = 0; i < (n*n); i++){
            cin >> arr[i];
        }
        
        bool flag = true;
        
        for(int i = 0, j = n*n - 1; i <= (n*n/2); i++, j--){
            if(arr[i] != arr[j]){
                flag = false;
                break;
            }
            
            if((arr[i] < 0) || (arr[j] < 0)){
                flag = false;
                break;                
            }
        }
        
        if(flag){
            cout << "Test #" << m << ": " << "Symmetric." << endl;
        } else {
            cout << "Test #" << m << ": " << "Non-symmetric." << endl;
        }
        
        m++;
    }
    
    return 0;
}
