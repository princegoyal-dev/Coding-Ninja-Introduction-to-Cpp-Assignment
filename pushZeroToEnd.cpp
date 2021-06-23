//Program to push all the zeros in an array to the last of array or end of the array
/*
    Sample input 1 : 10 10 0 2 1 0 5 0 4 7 0
    Sample output 2 : 10 2 1 5 4 7 0 0 0 0 

    Sample input 2 : 10 0 0 0 0 0 0 0 0 0 10
    Sample output 2 : 10 0 0 0 0 0 0 0 0 0 
*/
#include<bits/stdc++.h>

using namespace std;

void pushZeroToEnd(int arr[], int length) {
    int i = 0;
    int k = 0;
    while(i < length) {
        if(arr[k] != 0) {
            k++;
            i++;
        } else {
            while(arr[i] == 0) {
                i++;
            }
            if (arr[i] != 0 && (i < length)) {
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
            k++;
            i++;
        }
    }
    for( int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
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

    for ( int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    pushZeroToEnd(arr, length);

    return 0;
}