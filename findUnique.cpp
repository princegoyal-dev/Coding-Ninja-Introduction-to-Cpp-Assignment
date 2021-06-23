//Program to find unique number in a given series of no.
//Program will return the first occurence of the no repeating number(ie. unique number)
/*
 Sample input 1: 6 10 20 12 10 20 12
 Sample output 1:
    No Unique Number
    0   

    Sample input 2: 6 10 20 12 10 20 22
    Sample output 2 : 12
*/
#include<bits/stdc++.h>

using namespace std;

int findUnique(int arr[], int length) {
    for(int i = 0; i < length; i++) {
        bool isUnique = true;
        for(int j = 0; j < length; j++) {
            if(j == i) {
                continue;
            } else {
                if(arr[i] == arr[j]) {
                    isUnique = false;
                    continue;
                }
            }
        }
        if (isUnique) {
            return arr[i];
        }
    }
    cout << "No Unique Number" << endl;
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

    cout << findUnique(arr, length) << endl;

    return 0;
}