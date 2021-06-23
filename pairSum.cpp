//Program to find Pair Sum
/* Sample input :
        10
        1 2 3 5 9 8 4 5 7 5
        10
    Sample output : 
        Index is : 0 4
        Index is : 1 5
        Index is : 2 8
        Index is : 3 7
        Index is : 3 9
        Index is : 7 9
*/
#include<bits/stdc++.h>

using namespace std;

void pairSum(int arr[], int length, int sum) {
    for( int i = 0; i < (length - 1); i++) {
        for (int j = i+1; j < length; j++) {
            if((arr[i] + arr[j]) == sum) {
                cout << "Index is : " << i << " " << j << endl;
            }
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
    
    int arr[100];

    int length;
    cin >> length;
    
    for( int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    int sum;
    cin >> sum;

    pairSum(arr, length, sum);
    return 0;
}