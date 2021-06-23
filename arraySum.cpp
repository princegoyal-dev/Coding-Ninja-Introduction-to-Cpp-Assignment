//Program to sum two long size numbers using arrays
/*
    Sample input 1 :
        10 1 0 2 5 4 0 2 5 4 8
        5 1 2 3 4 5
    Sample output 1 :
        0 1 0 2 5 4 1 4 8 9 3 

    Sample input 2 :
        15 5 0 2 5 4 0 2 5 4 8 5 9 8 7 0
        15 5 8 5 6 7 5 4 0 2 1 1 5 4 7 8
    Sample output 2 :
        1 0 8 8 2 1 5 6 5 6 9 7 5 3 4 8 

*/
#include<bits/stdc++.h>

using namespace std;

void arraySum(int num1[], int num2[], int length1, int length2) {
    
    int lastIndexArray1 = length1 - 1;
    int lastIndexArray2 = length2 - 1;

    int greaterIndex = lastIndexArray2;
    int lesserIndex = lastIndexArray1;
    if(length1 > length2) {
        greaterIndex = lastIndexArray1;
        lesserIndex = lastIndexArray2;
    }

    int sizeNewArray = greaterIndex + 2;
    int arraySum[sizeNewArray] = {0};
    int sum = 0;
    int carry, unitDigit, tensDigit;

    for( int i = greaterIndex; i >= 0; i--, lesserIndex-- ) {
        if(lesserIndex >= 0) {
            sum = num1[i] + num2[lesserIndex] + carry;
            carry = 0;
            if(sum > 9) {
                unitDigit = sum % 10;
                tensDigit = sum / 10;
                arraySum[i+1] = unitDigit;
                carry = tensDigit;
            } else {
                arraySum[i+1] = sum;
            }
        } else {
            arraySum[i+1] = num1[i];
        }
        if((i == 0) && (carry != 0)) {
            arraySum[i] = 1;
        }
    }
    for (int i = 0; i < sizeNewArray; i++) {
        cout << arraySum[i] << " ";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif
    
    int num1[100], num2[100];

    int length1, length2;
    cin >> length1;

    for( int i = 0; i < length1; i++) {
        cin >> num1[i];
    }

    cin >> length2;
    for( int i = 0; i < length2; i++) {
        cin >> num2[i];
    }

    arraySum( num1, num2, length1, length2);

    return 0;
}