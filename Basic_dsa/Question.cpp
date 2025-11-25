#include<iostream>
using namespace std;
int main() {
    int n = 40;
    int sum = 0;
    for(int i=1; i<=n; i++) {                                 // 3 divisible number {1}
        if(i % 3 == 0) {
            cout<< i <<" ";
            sum += i;
        }
    }
    cout<<endl;
    cout<<"Total divisible number sum = "<< sum << endl;

    // 4 divisible number  [ while loop ]

    int m = 1;
    int Sum = 0;
    while(m<=30) {
        if(m % 4 == 0) {                                                          // {2}
            cout << m <<" ";
            Sum += m;
        }
        m++;
    }
    cout<<endl;
    cout<<"Total divisible number sum = "<< Sum << endl;

    // Print Factorial Count [ for loop ]
    
    int x = 6;
    int fact = 1;
    for(int i=1; i<=x; i++) {                                                     // {3}
        fact *= i;
    }
    cout << "Factorial = " << fact << endl;
    cout<<endl;

    // print Factorial Count [ while loop ]

    int y = 1;
    int Fact = 1;
    while(y<=8) {                                       
        Fact *= y;                                                                // {4}
        y++;
    }
    cout << "Factorial = " << Fact << endl;

    return 0;
}