//Program to remove the consecutive duplicates in a string
//Sample input 1 : aaabbcccddiiiillla
//Sample output 1 : abcdila

//Sample input 2 : aaasddkkksdfcddiiiillla
//Sample output 2 : asdksdfcdila
#include<bits/stdc++.h>

using namespace std;

void removeConsecutiveDuplicates(string a) {
    char currentChar;
    currentChar = a[0];
    cout << currentChar;
    for( int i = 1; i < a.length(); i++) {
        if(a[i] != currentChar) {
            cout << a[i];
            currentChar = a[i];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif
    
    string a;
    cin >> a;

    removeConsecutiveDuplicates(a);

    return 0;
}