// Program to find greatest common divisor in
// Sample input : 6 16
// Sample output: 2
#include<bits/stdc++.h>
using namespace std;

int findGcd(int a, int b){
    //swapping the number in case a is bigger than b
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    int gcd;
    int remainder;
    //GCD can be calculated by repeatedly calculating the remainder and number
    /* Demonstration
        16 % 6 = 4
        4 % 6 = 2
        2 % 4 = 0
        hence 2 is the GCD/ HCF
    */
    while(b % a > 0){
        remainder = b % a;
        b = a;
        a = remainder;
    }
    gcd = remainder;
    return gcd;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a, b;
    cin >> a >> b;

    int result;
    result = findGcd(a, b);
    cout << result << endl;
    return 0;
}