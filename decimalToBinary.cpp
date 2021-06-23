//Program to convert Binary number into Decimal Number
//Sample input : 13
/*Sample output :
    Decimal Number : 13
    Binary Conversion : 1101
*/
#include<bits/stdc++.h>

using namespace std;

int decimalToBinary(int decimal_num) {
    int remainder;
    int binary_num = 0, i = 0;
    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        binary_num += remainder * pow(10,i);
        decimal_num /= 2;
        i++;
    }
    return(binary_num);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif
    
    int decimal_num;
    cin >> decimal_num;

    cout << "Decimal Number : " << decimal_num << endl;
    cout << "Binary Conversion : " << decimalToBinary(decimal_num) << endl;

    return 0;
}