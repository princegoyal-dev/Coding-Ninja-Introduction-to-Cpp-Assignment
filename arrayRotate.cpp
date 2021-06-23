//Program to rotate the array elements
/*
    Sample input 1 : 6 1 2 3 4 5 6 4
    Sample output 1 : 
                    1 2 3 4 5 6 
                    2 3 4 5 6 1 
                    3 4 5 6 1 2 
                    4 5 6 1 2 3 
                    5 6 1 2 3 4 
                    6 1 2 3 4 5 
                    1 2 3 4 5 6
*/                    
#include<bits/stdc++.h>

using namespace std;

void arrayRotate(int arr[], int length, int rotation) {
    for( int i = 0; i < rotation; i++) {
        int firstElement = arr[0];
        int j;
        for(j = 1; j < length; j++) {
            arr[j-1] = arr[j];
        }
        arr[j-1] = firstElement; 
        for( int i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
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

    for( int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    int rotation;
    cin >> rotation;

    for( int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    arrayRotate(arr, length, rotation);

    return 0;
}