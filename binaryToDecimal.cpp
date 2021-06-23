//Program to convert binary number to decimal number
//Sample input : 101010
/*Sample output :
    Binary Number : 101010
    Decimal Conversion : 42
*/
#include<bits/stdc++.h>

using namespace std;

int binaryToDecimal(int binary_num) {
    int last_digit;
    int sum, i = 0;
    while(binary_num != 0) {
        last_digit = binary_num % 10;
        sum += last_digit * (1 << i);
        binary_num /= 10;
        i++;
    }
    return(sum);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif
    
    int binary_num;
    cin >> binary_num;

    cout << "Binary Number : " << binary_num << endl;
    cout << "Decimal Conversion : " << binaryToDecimal(binary_num) << endl;

    return 0;
}