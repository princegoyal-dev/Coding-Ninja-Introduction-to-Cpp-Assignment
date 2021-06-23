//Program to find Duplicate of a number in a given list of numbers
/*
    Sample input 1 : 6 10 20 30 40 50 50
    Sample output 1 : 50

    Sample input 2 : 5 10 20 30 40 50
    Sample output 2 :
        All are unique Numbers
        0
*/
#include<bits/stdc++.h>

using namespace std;

int findDuplicate(int arr[], int length) {
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length; j++) {
            if (i == j) {
                continue;
            } else {
                if (arr[i] == arr[j]) {
                    return arr[i];
                }
            }
        }
    }
    cout << "All are unique Numbers" << endl;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif

    int arr[100];

    int length;
    cin >> length;

    for(int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    cout << findDuplicate(arr, length) << endl;
    
    return 0;
}