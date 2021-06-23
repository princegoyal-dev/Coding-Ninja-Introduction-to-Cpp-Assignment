//Program to find second largest element in an array
/*
    Sample input : 11 1 2 3 4 5 6 4 7 8 12 13
    Sample output : 12
*/
#include<bits/stdc++.h>

using namespace std;

int findSecondLargest(int arr[], int length) {
    int largest = INT_MIN;
    int secondLargest;
    for(int i = 0; i < length; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
    }
    return secondLargest;
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

    cout << findSecondLargest(arr, length);

    return 0;
}