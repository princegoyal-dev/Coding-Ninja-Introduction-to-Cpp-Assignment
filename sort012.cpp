//Program to sort 012 in a given array
// Sample input : 15 0 1 2 0 1 2 1 1 2 1 2 0 1 2 0
// Sample output : 0 0 0 0 1 1 1 1 1 1 2 2 2 2 2 
#include<bits/stdc++.h>

using namespace std;

void sort012(int arr[], int length) {
    int j = 0, k = length - 1;
    for( int i = 0; i < length; i++) {
        if (arr[i] == 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        } else if ( arr[i] == 2) {
            while(k > i) {
                if(arr[k] < 2) {
                    int temp = arr[i];
                    arr[i] = arr[k];
                    arr[k] = temp;
                    i--;
                    k--;
                    break;
                }
                k--;
            }
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

    for(int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    sort012(arr, length);

    return 0;
}