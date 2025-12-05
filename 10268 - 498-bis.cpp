/*
1. 從高次方加到低次方，有超時問題
2. 會 overflow，型別得用 long long

3. vector<long long> arr;	// 動態陣列
4. arr.push_back(i);	// 插尾
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long x;
    
    while(cin >> x){
		// 記得吃掉換行字元
        cin.ignore();
        
        string l;
        
        getline(cin, l);
        
        stringstream ss(l);
        
        long long a;
        
        vector<long long> arr;
        
        while(ss >> a){
            arr.push_back(a);
        }
        
        long long sum = 0;
        long long xx = 1;
        
        for(int i = arr.size() - 2, j = 0; i >= 0; i--, j++){
            sum += (j + 1) * xx * arr[i];
            xx *= x;
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
