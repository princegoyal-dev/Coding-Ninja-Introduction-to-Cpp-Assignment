//Program to reverse a give number without using string or arrays;
//Sample input : 12345
/*Sample output :
    Initial Number : 12345
    Reversed Number : 54321
*/
#include<bits/stdc++.h>

using namespace std;

int numberReverse(int num) {
    int count_digits = 0;
    int temp_num = num;
    
    while(temp_num != 0) {
        temp_num = temp_num /10;
        count_digits++;
    }

    int final_num = 0;
    while(num != 0) {
        int last_digit = num % 10;
        for(int i = (count_digits-1); i > 0; i--) {
            last_digit = last_digit * 10;
        }
        count_digits--;
        final_num += last_digit;
        num /= 10;
    }
    return(final_num);
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

    cout << "Initial Number : " << num << endl;
    cout << "Reversed Number : " << numberReverse(num) << endl;

    return 0;
}