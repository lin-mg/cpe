/*
1. cin 不會讀空白字元，getchar 才會，因此這題要用 getchar 處理
2. getchar 有返回值，讀到 EOF 會返回 -1
3. c = tolower(c);    // 轉小寫

4. 題目沒有說不會換行，因此要補換行字元
*/
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
