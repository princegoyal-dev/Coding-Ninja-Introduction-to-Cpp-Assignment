//Program to find fibonacci series
//Sample input : 7
//Sample output : 0 1  1 2 3 5 8
#include<bits/stdc++.h>

using namespace std;

//workflow is addiding two numbers, the n-1 and n-2 numbers
void fibonacci(int num){
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    int sum = 0;
    for(int i = 2; i <=num; i++){
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
    cout << endl;
}

//recursive approach to find specific fib number at a given position (start form 0th positon)
//sample input : 7
//Sample output : 13
//13 output occurs on index 7 starting from index 0 so actual position is 8th
int fibonacciRecursive(int num){
    if(num == 0 || num == 1){
        return(num);
    }
    return(fibonacciRecursive(num-1) + fibonacciRecursive(num-2));
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

    fibonacci(num);

    cout << fibonacciRecursive(num);
    return 0;
}