#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n, p;
        cin >> n >> p;
        
        int arr[n+1] = {};
        
        for(int i = 0; i < p; i++){
            int h;
            cin >> h;
            
            for(int j = h; j <= n; j+=h){
                arr[j] = 1;
            }
        }
        
        int sum = 0;
        
        for(int i = 1; i < n+1; i++){
            if(arr[i] && ((i % 7 != 6) && (i % 7 != 0))){
                sum++;
            }
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
