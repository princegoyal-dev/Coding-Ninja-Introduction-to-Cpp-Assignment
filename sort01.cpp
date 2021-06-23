//Program to sort a binary array 
/*
    Sample input 1 : 10 0 1 0 1 0 1 1 1 0 0
    Sample output 1 : 0 0 0 0 0 1 1 1 1 1 

    Sample input 2 : 7 1 1 1 1 1 1 0
    Sample output 2 : 0 1 1 1 1 1 1 
*/
#include<bits/stdc++.h>

using namespace std;

void sort01(int arr[], int length) {
    int i = 0;
    int j = length - 1;
    while (i < j) {
        if( arr[i] == 1) {
            while(j > i) {
                if(arr[j] == 0) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                } else {
                    j--;
                }
            }
        }
        i++;
    }
    for ( int i = 0; i < length; i++) {
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

    for(int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    sort01(arr, length);

    return 0;
}