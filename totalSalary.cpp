//Program to find the total salary
//Sample input : 5000 A
/*Sample output :
    Basic Salary : 5000 with grade A
    HRA : 1000
    DA : 2500
    Allowance : 1700
    PF deducted : 550
    Total salary : 9650
*/
#include<bits/stdc++.h>

using namespace std;

float calcFinalSalary(float basic_sal, char grade) {
    float hra, allow, da, pf;
    
    hra = (0.2 * basic_sal);
    cout << "HRA : " << hra << endl;

    da = (0.5 * basic_sal);
    cout << "DA : " << da << endl;

    if(grade == 'A'){
        allow = 1700;
    } else if (grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }
    cout << "Allowance : " << allow << endl;

    pf = (0.11 * basic_sal);
    cout << "PF deducted : " << pf << endl;
    
    return(basic_sal + hra + da + allow - pf);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif
    
    float basic_sal;
    char grade;
    cin >> basic_sal >> grade;
    
    cout << "Basic Salary : " << basic_sal << " with grade " << grade << endl;
    float finalSal = calcFinalSalary(basic_sal, grade);
    cout << "Total salary : " << finalSal << endl;
    return 0;
}