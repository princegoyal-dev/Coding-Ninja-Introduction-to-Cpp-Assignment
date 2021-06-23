#include<bits/stdc++.h>

using namespace std;

bool checkNumSeq(int arr[], int length) {
    int diffArr[length-1];
    for(int i = 0; i < length-1; i++) {
        diffArr[i] = (arr[i+1] - arr[i]);
    }
    int counter = 0;
    int i = 0;
    if(diffArr[0] > 0) {
        cout << "Incresing first" << endl;
        while (diffArr[i] > 0){
            i++;
        }
        if(i == length-1) {
            return true;
        }
        cout << "Now Decreasing" << endl;
        while (diffArr[i] < 0){
            i++;
        }
        if (i == length-1) {
            return true;
        }
    }
    else if(diffArr[0] < 0) {
        cout << "Decreasing first" << endl;
        while (diffArr[i] < 0){
            i++;
        }
        if(i == length-1) {
            return true;
        }
        cout << "Now Increasing" << endl;
        while (diffArr[i] > 0){
            i++;
        }
        if (i == length-1) {
            return true;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif
    
    int arr[50];
    int length;
    cin >> length;

    for(int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    cout << checkNumSeq(arr, length) << endl;
    return 0;
}