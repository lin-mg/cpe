#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    cin >> t;
    
    while(t--){
        int m, d;
        cin >> m >> d;
        
        int days = d;
        for(int i = 0; i < m-1; i++){
            days += month[i];
        }
        
        days %= 7;
        
        if(days == 6){
            cout << "Thursday";
        } else if(days == 0){
            cout << "Friday";
        } else if(days == 1){
            cout << "Saturday";
        } else if(days == 2){
            cout << "Sunday";
        } else if(days == 3){
            cout << "Monday";
        } else if(days == 4){
            cout << "Tuesday";
        } else if(days == 5){
            cout << "Wednesday";
        }
        
        cout << endl;
    }
    
    return 0;
}
