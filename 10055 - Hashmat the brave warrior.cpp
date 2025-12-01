#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;

    // a, b 大小順序不一定，但加了絕對值，所以沒差
    while(cin >> a >> b){
        cout << abs(b - a) << endl;
    }

    return 0;
}
