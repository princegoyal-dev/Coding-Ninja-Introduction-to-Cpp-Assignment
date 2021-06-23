//Program to remove a specific character from a given string
//Using predefined string header file
/*
    Sample input 1 :
        aaasddkkksdfaaaaacddiiiillla
        a
    Sample output 1 : 
        sddkkksdfcddiiiilll

    Sample input 2 :
        aaasddkkksdfaaaaacddiiiillla
        b
    Sample output 2 :
        aaasddkkksdfaaaaacddiiiillla
*/
#include<bits/stdc++.h>

using namespace std;

string removeChar(string a, char c) {
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == c) {
            a.erase(a.begin() + i);
            i--;
        }
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif
    
    string a;
    getline(cin, a);

    char c;
    cin >> c;

    string result = removeChar(a, c);

    cout << result << endl;

    return 0;
}