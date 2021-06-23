//Program to retrieve highest occuring character in a string
/*
Sample input 1 : aaasddkkksdfaaaaacddiiiillla
Sampe output 1 : a

Sample input 2 : aaaabbbbbccccdddddd
Sample output 2 : d
*/
#include<bits/stdc++.h>

using namespace std;

char findHighestOccurence(string a) {
    int charCount[255] = {0};
    for(int i = 0; i < a.length(); i++) {
        charCount[a[i]]++;
    }
    int maxCount = INT_MIN;
    int maxCharNo;
    int i;
    for(i = 0; i < 255; i++) {
        if(maxCount < charCount[i]){
            maxCount = charCount[i];
            maxCharNo = i;
        }
    }
    char maxChar = maxCharNo;
    return maxChar;
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

    cout << findHighestOccurence(a);

    return 0;
}