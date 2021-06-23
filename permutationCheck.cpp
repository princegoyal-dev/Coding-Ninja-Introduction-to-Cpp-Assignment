//Program to check String permutation
//ie. whether they are equal (order can be changed)
/*
    Sample input 1 : 
        aaaabbbccffd
        dffccaaabbbb
    Sample output 1 :
        false

    Sample input 2 :
        aaaabbbccffd
        dffccaaabbba
    Sample output 2 :
        true
*/
#include<bits/stdc++.h>

using namespace std;

bool checkPermutation(string a, string b) {
    int charCounter[255] = {0};
    for(int i = 0; i < a.length(); i++) {
        charCounter[a[i]]++;
    }
    for(int i = 0; i < b.length(); i++) {
        charCounter[b[i]]--;
    }
    for( int i = 0; i < 255; i++) {
        if(charCounter[i] != 0) {
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif
    
    string a, b;
    cin >> a >> b;
    
    cout << boolalpha << checkPermutation(a, b) << endl;

    return 0;
}