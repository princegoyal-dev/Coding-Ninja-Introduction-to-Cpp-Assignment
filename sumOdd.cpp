//Program to print odd numbers between two given numbers
//Sample input : 9 17
//Sample output : 9 11 13 15 17 
#include<bits/stdc++.h>

using namespace std;

void sumOdd(int num1, int num2) {
    for (int i = num1; i<=num2; i++) {
        if ( i % 2 == 1){
            cout << i << " ";
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
    
    int num1, num2;
    cin >> num1 >> num2;

    sumOdd(num1, num2);

    return 0;
}