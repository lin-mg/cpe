#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[128] = {};
    int m = 0;

    char c;
    while(cin >> c){
        if(isalpha(c)){
            arr[toupper(c)]++;
            m = max(m, arr[toupper(c)]);
        }
    }
    
    for(int i = m; i > 0; i--){
        for(char j = 'A'; j <= 'Z'; j++){
            if(arr[j] == i){
                cout << j << " " << i << endl;
            }
        }
    }
    
    return 0;
}
