#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    
    string in = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ \n";
    string ou = "-=`1234567890]\\qwertyuiop[;'asdfghjkl./zxcvbnm, \n";
    
    while((c = getchar()) != EOF){
        for(int i = 0; i < in.length(); i++){
            if(tolower(c) == in[i]){
                cout << ou[i];
                break;
            }
        }
    }
    
    return 0;
}
