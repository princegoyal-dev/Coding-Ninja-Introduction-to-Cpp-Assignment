// Program is to find sum of even numbers in a given range(including num1 and num2)
#include<bits/stdc++.h>

using namespace std;

int sumEven(int num1, int num2){

    int sum = 0;
    for(int i = num1; i <= num2; i++){
        if(i % 2 == 0){
            sum += i;
        }
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

    //Example input
    //1 9
    int a, b;
    cin >> a >> b;

    int sum;
    sum = sumEven(a, b);
    //Example output
    // 20
    cout << sum;

    return 0;
}