//Program to find Common / Intersecting Elements in two arrays
/*
    Sample input 1 : 6 10 20 30 40 50 60
                     6 11 22 33 44 55 66
    Sample Output 1 : No Intersection Element

    Sample input 2 : 6 10 20 30 40 50 60
                     7 11 22 60 44 55 66 20
    Sample output 2 : 20 60 
*/
#include<bits/stdc++.h>

using namespace std;

void arrayIntersection(int arr1[], int length1, int arr2[], int length2) {
    bool flag = true;
    for( int i = 0; i < length1; i++) {
        for( int j = 0; j < length2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                flag = false;
            }
        }
    }
    if(flag) {
        cout << "No Intersection Element" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif
    
    //let the array be of size 100
    int arr1[100];
    int arr2[100];

    int length1;
    cin >> length1;

    for ( int i = 0; i < length1; i++) {
        cin >> arr1[i];
    }

    int length2;
    cin >> length2;

    for( int i = 0; i < length2; i++) {
        cin >> arr2[i];
    }

    arrayIntersection(arr1, length1, arr2, length2);

    return 0;
}