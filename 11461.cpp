#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    
    while(cin >> a >> b && a && b){
        int cnt = 0;
        for(int i = 1; i*i <= b; i++){
            if(i*i >= a){
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
