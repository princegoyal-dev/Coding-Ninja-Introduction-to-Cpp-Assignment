//Program for finding Square root (Integral) of a given number
//Sample input : 25
//Sample output : Integral square root of : 25 is 5

#include<bits/stdc++.h>

using namespace std;

int squareRoot(int num) {
    int result;
    int prev;
    for(int i = 2; i <= num; i++) {
        if( i*i == num){
            prev = i;
            break;
        } else if(i*i > num) {
            break;
        }
        prev = i;
    }
    return(prev);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif
    
    int num;
    cin >> num;

    cout << "Integral square root of : " << num << " is " << squareRoot(num) << endl;

    return 0;
}